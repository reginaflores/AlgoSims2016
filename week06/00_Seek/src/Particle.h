#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    void setInit(ofPoint _pos, ofPoint _vel = ofPoint(0,0));
    
    ofPoint getPosition();
    
    void addForce(ofPoint _force);
    
    void seek( ofPoint dest );
    
    void update();
    void draw();
    
private:
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    float radius;
    float damp;
};