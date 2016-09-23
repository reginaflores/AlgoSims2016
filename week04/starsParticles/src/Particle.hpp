//
//  Particle.hpp
//  starsParticles
//
//  Created by Regina Flores on 9/20/16.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    void setInit(ofPoint _pos, ofPoint _vel = ofPoint(0,0));
    
    ofPoint getPosition();
    float   getRadius();
    
    void addForce(ofPoint _force);
    
    void addRepulsion(ofPoint _pos, float _rad, float _scale);
    void addAttraction(ofPoint _pos, float _rad, float _scale);
    void addClockwiseForce( ofPoint _pos, float _rad, float _scale);
    void addCounterClockwiseForce( ofPoint _pos, float _rad, float _scale);
    
    void update();
    void draw();
    
private:
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    float radius;
    float damp;
};