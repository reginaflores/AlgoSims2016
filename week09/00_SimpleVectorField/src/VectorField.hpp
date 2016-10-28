//
//  VectorField.hpp
//  00_SimpleVectorField
//
//  Created by Regina Flores on 10/24/16.
//
//

#pragma once

#include "ofMain.h"

class VectorField {
public:
        
    void setup(int _w, int _h, int  _res);
    void setNoise(float _time = 1.0);
    ofPoint getForce(ofPoint _pos);
    
    void update();
    void draw();
    
    vector< vector<ofPoint> > table;
    
    int width, height, cols, rows, res;
};
