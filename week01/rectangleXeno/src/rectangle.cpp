//
//  rectangle.cpp
//  rectangleXeno
//
//  Created by Regina Flores on 9/1/16.
//
//

#include "rectangle.hpp"


rectangle:: rectangle() {
    catchUpSpeed = 0.03;

}

void rectangle::draw(){

    ofFill();
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    ofSetColor(255, 0, 255);
    
    ofRect(pos.x, pos.y, 40, 40);
}

void rectangle::xenoToPoint(float catchX, float catchY){
    //Xeno formula:
    //myPos = (1-pct) * myPos + pct * targetPos
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) *pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) *pos.y;

}