//
//  MyBall.hpp
//  BouncingBall 
//
//  Created by Regina Flores on 9/8/16.
//
//

#pragma once 

#include "ofMain.h"

class MyBall {


    public:
    
    MyBall();
    
    void update();
    void draw();
    
    ofPoint position;
    
    ofVec2f velocity;



};