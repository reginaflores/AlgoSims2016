//
//  Particle.hpp
//  2_Spring
//
//  Created by Regina Flores on 9/29/16.
//
//
#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    void setInit(ofPoint _pos, ofPoint _vel = ofPoint(0,0));
    
    float   getRadius();
    ofPoint getPosition();
    ofPoint getVelocity();
    
    void addForce(ofPoint _force);
    
    void bounding();
    
    void update();
    void draw();
    
    bool bFix;
    
    //private:
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    float radius;
    float damp;
};