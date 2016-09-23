//
//  Ball.cpp
//  gravity
//
//  Created by Regina Flores on 9/22/16.
//
//

#include "Ball.hpp"

Ball::Ball(){

    pos.x = ofGetWidth()*0.5;
    pos.y = ofGetHeight()*0.5;
    
    vel.set(0,0);
    acc.set(0,0);
    
    damp = 0.9;
    radius = 10;
}

void Ball::setInit(ofPoint _pos){
    pos = _pos;
    vel.set(0,0);
    acc.set(0,0);
    
}

void Ball::addForce(ofPoint _force){
    acc += _force;

}

void Ball::update(){

    vel += acc;
    vel *=damp;
    pos += vel;
    acc *= 0.0;

    if(pos.x < 0.0  +radius || pos.x > ofGetWidth()-radius){
        pos.x -= vel.x;
        vel.x *= -2;
    }
    
    if(pos.y < 0.0+radius || pos.y > ofGetHeight()-radius){
        pos.y -= vel.y;
        vel.y *= -2;
        

    }
    
}

void Ball::draw(){
    ofCircle(pos, radius);
}









