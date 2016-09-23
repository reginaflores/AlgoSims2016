//
//  Particle.hpp
//  gridRepel
//
//  Created by Regina Flores on 9/21/16.
//
//

#pragma once

#include "ofMain.h"

class Particle{

public:
    Particle();
    void resetForce();
    void addDampingForce();
    void setInitialCondition(ofPoint _pos, ofPoint _vel);
    void update();
    void draw();
    void addRepulsionForce(ofPoint _pos, float _radius, float _strength);
    void addAttractionForce( ofPoint _pos, float _radius, float _strength);
    
private:
    ofPoint pos, vel, force; //force is also known an acceleration. Newton F = ma
    float damping;

    

};