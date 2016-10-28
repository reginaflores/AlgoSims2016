//
//  Particle.cpp
//  PerlinParticles
//
//  Created by Regina Flores on 10/25/16.
//
//

#include "Particle.hpp"

void Particle::setup( ofVec2f rVel ){
    vel = rVel;
    age = 0;
    lifespan = ofRandom(50, 150);
    
    pos = ofGetWindowSize() / 2.0;
};

void Particle::update(){

    float noise = ofNoise(pos.x * 0.005, pos.y*0.005, ofGetElapsedTimef() * 0.1) * 15.0;
    
//    float noise = 1;
    float agePct = 1.0 - ((float)age / (float)lifespan);
    
    // use sin and cos to give us some sweepy circular motion.  The closer we are to death, the more noise we add.
    pos += ofVec2f( cos(noise), sin(noise) ) * (1.0-agePct);
    pos += vel;
    vel *= 0.97;
    
    age++;

}

void Particle::draw(){

    
    float agePct = 1.0 - ((float)age / (float)lifespan);
    
    ofCircle( pos, 4.0 * agePct  ); // The older particle is, the larger it gets.
};



