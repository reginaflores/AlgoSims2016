//
//  Particle.hpp
//  00_SimpleVectorField
//
//  Created by Regina Flores on 10/27/16.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    void setInit(ofPoint _pos, ofPoint _vel = ofPoint(0,0));
    
    float   getRadius();
    ofPoint getPosition();
    ofPoint getVelocity();
    
    void addForce(ofPoint _force);
    
    void addRepulsionForce(ofPoint _pos, float _rad, float _scale);
    void addAttractionForce(ofPoint _pos, float _rad, float _scale);
    void addFlockingForce(vector<Particle> &_particles, float _neighborhoodRadius, float _alignmentScale = 0.33, float _separationScale = 0.33, float _cohesionScale = 0.33);
    
    void bounding();
    void infiniteWalls();
    
    void update();
    void draw();
    
private:
    ofPoint pos;
    ofPoint vel;
    ofPoint acc;
    
    vector<ofPoint> tail;
    
    float radius;
    float damp;
};