//
//  Spring.hpp
//  3D_Springs
//
//  Created by Regina Flores on 9/29/16.
//
//

#pragma once

#include "Particle.hpp"

class Spring {
public:
    
    Spring();
    Spring(Particle *_A, Particle *_B, float _k = 0.05);
    
    Particle * particleA;
    Particle * particleB;
    
    float restLength;
    float k;            // springiness constant
    
    void update();
    void draw();
};