//
//  Particle.hpp
//  attractionParticles
//
//  Created by Regina Flores on 9/20/16.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    void setInit(ofPoint _pos, ofPoint _vel);
    void addForce(ofPoint _force);
    
    void addRepulsion(ofPoint _pos, float _rad, float _scale);
    void addAttraction(ofPoint _pos, float _rad, float _scale);
    
    void update();
    void draw();
    
private:
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    float radius;
    float damp;
};