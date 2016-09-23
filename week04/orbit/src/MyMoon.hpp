//
//  MyMoon.hpp
//  orbit
//
//  Created by Regina Flores on 9/22/16.
//
//

#pragma once
#include "ofMain.h"

//Inheritence
class MyMoon : public ofPoint    {
    public:
    
    void set(float _dist, float _intAngle);
    void update(float _step, ofPoint _center);
    
    void draw();
    
    ///variables
    
    float radius;
    float angle;

};