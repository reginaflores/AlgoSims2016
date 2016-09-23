//
//  Ball.hpp
//  gravity
//
//  Created by Regina Flores on 9/20/16.
//
//

#pragma once

#include "ofMain.h"

class Ball {
public:
    Ball();
    
    void setInit(ofPoint _pos);
    void addForce(ofPoint _force);
    
    void update();
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    float radius;
    float damp;
};