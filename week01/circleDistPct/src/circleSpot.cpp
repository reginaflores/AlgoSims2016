//
//  circleSpot.cpp
//  circleDistPct
//
//  Created by Regina Flores on 9/1/16.
//
//

#include "circleSpot.hpp"



void circleSpot::setup(){

    pos.set(ofRandom(0,ofGetWidth()), ofRandom(0, ofGetHeight()));
    innerRadius = ofRandom(20, 200);
    outerRadius = innerRadius + ofRandom(20, 300);
    
    colorA.setHsb(ofRandom(0 , 60), 255, 255);
    colorB.setHsb(ofRandom(0 , 255), 255, 255);

    
}


void circleSpot::update(ofPoint mouse){
    
    float distance = (pos - mouse).length(); //note: length returns the magnitude of the vector
    
    pct = (distance - innerRadius) / (outerRadius - innerRadius);
    
    pct = ofClamp(pct, 0, 1);
}


void circleSpot::draw(){

    ofColor mix;
    
    mix.r =  (1-pct) * colorA.r + pct * colorB.r;
    mix.g =  (1-pct) * colorA.g + pct * colorB.g;
    mix.b =  (1-pct) * colorA.b + pct * colorB.b;
    
    ofSetColor(mix);
    ofCircle(pos, innerRadius * pct);

}