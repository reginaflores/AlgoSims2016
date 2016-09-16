//
//  Particle.hpp
//  myParticleSystem
//
//  Created by Regina Flores on 9/15/16.
//
//

#pragma once

#include "ofMain.h"

class Particle {


public:
    
    Particle();
    
    void setup();
    void update();
    void draw();
    
    
    void bounding();
    
    ofPoint pos;
    ofPoint vel;
    
    float radius;
};





