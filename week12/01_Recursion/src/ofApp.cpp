#include "ofApp.h"

//--------------------------------------------------------------

void ofApp::setup(){

    ofBackground(0);
    ofSetColor(255);
    
}

void ofApp::drawDiamond(float x, float y, float size){
    
    //what the function draws:
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofNoFill();
    ofPushMatrix();
    
        ofTranslate(x, y);
        ofRotate(45);
        ofRect(0, 0, size, size);
        
    ofPopMatrix();
    
    //Recursion:
    
    //Define an exit! To avoid an infinite loop!
    
    if(size > 16){
        drawDiamond(x + size/2, y, size/2);
        drawDiamond(x - size/2, y, size/2);
        drawDiamond(x , y + size/2, size/2);
        drawDiamond(x , y - size/2, size/2);
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    drawDiamond(ofGetWindowWidth()/2, ofGetWindowHeight()/2, ofGetWindowWidth()/2);
}






