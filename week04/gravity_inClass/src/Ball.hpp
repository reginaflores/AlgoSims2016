//
//  Ball.hpp
//  gravity
//
//  Created by Regina Flores on 9/22/16.
//
//

#pragma once
#include "ofMain.h"

class Ball{

public:
    
    Ball();
    void setInit(ofPoint _pos);
    void update();
    void draw();
    
    void addForce(ofPoint _force);
    
    ofPoint pos, vel, acc;
    
    float radius, damp;

};