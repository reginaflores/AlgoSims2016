//
//  MyBall.cpp
//  BouncingBall 
//
//  Created by Regina Flores on 9/8/16.
//
//

#include "MyBall.hpp"

//Constructor
MyBall::MyBall(){

    //Dot Notation:
    velocity.x = ofRandom(0, 1);
    velocity.y = ofRandom(0,1);

    
    position.x = ofGetWidth()/2;
    position.y = ofGetHeight()/2;
}

void MyBall::update(){

    //x += 1 ===== x = x + 1
    position.x += velocity.x *10;
    position.y += velocity.y *10;
    
    //Bounding Conditions
    if(position.x < 0 || position.x > ofGetWidth()){
        velocity.x = velocity.x * -1;
    
    }
    
    if( position.y < 0 || position.y > ofGetHeight()){
        velocity.y = velocity.y * -1;
    }
    
}

void MyBall::draw(){
//    ofSetColor(255, 0, 0);
//    ofCircle(position.x, position.y, 10);
    ofCircle(position, 10);
}









