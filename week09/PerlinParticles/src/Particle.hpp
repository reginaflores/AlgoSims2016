//
//  Particle.hpp
//  PerlinParticles
//
//  Created by Regina Flores on 10/25/16.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle(){};
    void setup( ofVec2f rVel );
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    int age, lifespan;
};
