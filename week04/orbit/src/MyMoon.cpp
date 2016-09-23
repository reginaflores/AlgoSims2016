//
//  MyMoon.cpp
//  orbit
//
//  Created by Regina Flores on 9/22/16.
//
//

#include "MyMoon.hpp"

void MyMoon::set(float _dist, float _intAngle){


    radius = _dist;
    angle = _intAngle;

}


void MyMoon::update(float _step, ofPoint _center){

    angle+= _step;
    
    x = _center.x + radius * cos(angle);
    y = _center.y + radius * sin(angle);

}

void MyMoon::draw(){

    ofSetColor(255, 0, 0);
    ofCircle(*this, 10);
    
    
}





