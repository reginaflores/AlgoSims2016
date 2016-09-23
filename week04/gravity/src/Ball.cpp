//
//  Ball.cpp
//  gravity
//
//  Created by Regina Flores on 9/20/16.
//
//

#include "Ball.hpp"


Ball::Ball() {
    pos.x = ofGetWindowWidth()*0.5;
    pos.y = ofGetWindowHeight()*0.5;
    
    vel.set(0,0);
    acc.set(0,0);
    
    damp = 0.9; // de resistance!!!
    radius = 10;
}

void Ball::setInit(ofPoint _pos){
    pos = _pos;
    vel.set(0,0);
    acc.set(0,0);
}

void Ball::addForce(ofPoint _force){
    
    //F = m*a and if m is const = 1
    //F = a
    //acceleration of a falling object is just g = 9.8 m/s^2
    acc += _force;
}

void Ball::update() {
    
    vel += acc;
    vel *= damp;
    pos += vel;
    acc *= 0.0;

    if( pos.x < 0.0+radius || pos.x > ofGetWidth()-radius ){
        pos.x -= vel.x; // Bounced back! think of this as an undo;
        vel.x *= -2.0;
    }
    
    if( pos.y < 0.0+radius || pos.y > ofGetHeight()-radius ){
        pos.y -= vel.y; // Bounced back! think of this as an undo;
        vel.y *= -2.0;
    }
}

void Ball::draw() {
    ofCircle(pos, radius);
}