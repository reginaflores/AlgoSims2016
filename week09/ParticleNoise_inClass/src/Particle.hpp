//
//  Particle.hpp
//  ParticleNoise
//
//  Created by Regina Flores on 10/27/16.
//
//
#pragma once
#include "ofMain.h"

class Particle{

public:
//    Particle();
    void setup( ofVec2f rvel);
    void update();
    void draw();

    ofVec2f pos;
    ofVec2f vel;
    int age, lifespan;

};