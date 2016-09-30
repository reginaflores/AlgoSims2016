//
//  Spring.hpp
//  3_Forces
//
//  Created by Regina Flores on 9/29/16.
//
//

#pragma once
#include "ofMain.h"
#include "Particle.hpp"

class spring {
    
public:
    
    spring();
    void update();
    void draw();
    
    
    particle * particleA;
    particle * particleB;
    
    float distance;
    float k;	 // this is the k, springiness constant
    

    
    
};