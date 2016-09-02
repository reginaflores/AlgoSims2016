//
//  circleSpot.hpp
//  circleDistPct
//
//  Created by Regina Flores on 9/1/16.
//
//

#pragma once

#include "ofMain.h"


class circleSpot{


public:
    
    
    void setup();
    void update(ofPoint mouse);
    void draw();
    
    float innerRadius;
    float outerRadius;
    
    ofPoint pos;
    ofColor colorA;
    
    ofColor colorB;
    
    float pct;


};