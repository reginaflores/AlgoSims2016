//
//  Particle.cpp
//  ParticleNoise
//
//  Created by Regina Flores on 10/27/16.
//
//

#include "Particle.hpp"

void Particle:: setup(ofVec2f rvel){
    
    vel = rvel;
    age  = 0;
    lifespan = ofRandom(50, 150);
    
    pos = ofGetWindowSize()/2;

}

void Particle::update(){
    float noise = ofNoise(pos.x * 0.005, pos.y * 0.005, ofGetElapsedTimef() * 0.1) *15;
    
    //casting: (float) age
    float agePct = 1 - ((float)age / (float) lifespan);
    
    //circular motion to the particles
    pos = ofVec2f ( cos(noise), sin(noise) ) * (1.0 - agePct);
    pos += vel;
    vel*=0.97;
    
    age ++;
}

void Particle::draw(){
    
    float agePct = 1 - ((float)age / (float) lifespan);
    ofCircle(pos, 4.0 *agePct);//the older the particle gets, the larger the circle gets
    
}








