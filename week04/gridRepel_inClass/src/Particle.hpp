//
//  Particle.hpp
//  gridRepel
//
//  Created by Regina Flores on 9/22/16.
//
//

#pragma once

#include "ofMain.h"

class Particle{

public:
    Particle();
    
    void update();
    void draw();
    
    void addDampeningForce();
    void setInitialCondition(ofPoint _pos, ofPoint _vel);
    
    void addRepulsionForce(ofPoint _pos, float _radius, float _strength);
    void addattractionForce(ofPoint _pos, float _radius, float _strength);
    void resetForce();

private:
    ofPoint pos, vel, force;
    float damping;


};





