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
    
    //passing in a reference of a vector of particles
    //these are not pointers
    //these are references
    
    //why couldnt i just pass in the vector itself? why do i need a ref?
    //because c++ would make a copy by default and that would be memory intensive. Also, if you create another copy of the object then when you pass in your array of paarticles the addresses are different. So you cant refer to the actual particle, its like a new set of particles. 
    void update( vector<Particle> &particles );

    ofPoint cohesion(vector<Particle> &particles);
    ofPoint separation(vector<Particle> &particles);
    ofPoint allignment(vector<Particle> &particles);
    
    ofPoint pos;
    ofPoint vel;
    int radius;
    

};