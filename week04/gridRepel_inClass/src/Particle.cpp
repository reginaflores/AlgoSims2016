//
//  Particle.cpp
//  gridRepel
//
//  Created by Regina Flores on 9/22/16.
//
//

#include "Particle.hpp"

Particle::Particle(){

    setInitialCondition(ofPoint(0,0), ofPoint(0,0));
    damping = 0.09;
    
}

void Particle::setInitialCondition(ofPoint _pos, ofPoint _vel){

    //pos = _pos
    pos.set(_pos.x, _pos.y);
    vel.set(_vel.x, _vel.y);
}

void Particle::update(){

    vel = vel + force;
    pos = pos + vel;

}

void Particle::resetForce(){

    force.set(0,0);
}

void Particle::addDampeningForce(){

    force = force - vel * damping;
}

void Particle::addRepulsionForce(ofPoint _pos, float _radius, float _strength){
    
    
    //subroutine
    ofPoint posOfForce;
    ofPoint diff = pos - posOfForce;
    
    if( diff.length() < _radius){
    
        diff *= ofMap(diff.length(), 0, _radius, 0, 1);
        
        force += diff * _strength;
        
    }

}

void Particle::addattractionForce(ofPoint _pos, float _radius, float _strength){

    //subroutine
    ofPoint posOfForce;
    ofPoint diff = pos - posOfForce;
    
    if( diff.length() < _radius){
        
        diff *= ofMap(diff.length(), 0, _radius, 0, 1);
        
        force -= diff * _strength;
        
    }
}

void Particle::draw(){

    ofCircle(pos, 3);
}

















