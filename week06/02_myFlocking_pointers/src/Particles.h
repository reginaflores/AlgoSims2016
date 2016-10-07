//
//  Particles.h
//  myFlocking
//
//  Created by Regina Flores on 9/25/14.
//
//
#pragma once
#include "ofMain.h"


class Particle{
public:
    
    Particle();
    
    void init();
    void bounding();
    void draw();

    //this is more of a software design question.
    //many ways to wrtie software and solve a probelem
    
  //in this case you have a pointer to an array
    
    void update( vector<Particle> *particles );

    ofPoint cohesion(vector<Particle> *particles);
    ofPoint separation(vector<Particle> *particles);
    ofPoint allignment(vector<Particle> *particles);
    
    ofPoint pos;
    ofPoint vel;
    int radius;
    

};