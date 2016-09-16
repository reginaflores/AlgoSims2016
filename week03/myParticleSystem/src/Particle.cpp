//
//  Particle.cpp
//  myParticleSystem
//
//  Created by Regina Flores on 9/15/16.
//
//

#include "Particle.hpp"

Particle::Particle(){
    
    radius = 1.5;

}


void Particle::setup(){

    pos = ofPoint(0,0, 0);
    
    vel = ofPoint(ofRandom(-1,1), ofRandom(-1,1), ofRandom(-1,1));

}


void Particle::draw(){
    
    ofCircle(pos.x, pos.y, pos.z, radius);
}


void Particle::update(){
    
    pos = pos + vel;
}

void Particle::bounding(){

    if(pos.y > 200 || pos.y < -200){
        vel.y = -vel.y;
        
    }
    
    if(pos.x > 200 || pos.x < -200 ){
    
        vel.x = -vel.x;
    
    }

    if( pos.z > 200 || pos.z < -200){
    
        vel.z = -vel.z;
    }


}
















