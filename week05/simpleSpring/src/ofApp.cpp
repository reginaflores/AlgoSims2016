#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    k = 0.05;
    restLength = 200;
    
    anchor = ofVec2f(ofGetWidth()/2, 10);
    ball = ofVec2f(ofGetWidth()/2, restLength + 50);
    
    dragging = false;
    
}
//--------------------------------------------------------------

//Our own function in the main

void ofApp::applyForce(ofVec2f force){
//    acc += force;
    acc.x += force.x;
    acc.y += force.y;
}

//--------------------------------------------------------------
void ofApp::update(){

    if(dragging == true){
        return; //go out of update of function
    }
    
    //Steps to create the springy effect
    ofVec2f force = ball - anchor; // the direction of the vector
    
    float currentLength = force.length();
    float x = currentLength - restLength;
    //normalize refers to vector math whereby you multiply the vector by the "unit vector"
    force.normalize();
    force *= -1 * k * x;  //applying Hooke's Law
    
    applyForce(force);
    applyForce(ofVec2f(0,1.0));//brings the x component back to 0
    
    //Add dynamic movement
    vel+=acc;
    vel*=0.98; // gravity
    ball+=vel;
    acc*=0; //set back to 0 to bring the spring thing back to a neutral position.
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofLine(anchor, ball);
    ofCircle(anchor, 10);
    ofCircle(ball, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    if(dragging==true){
        ball.set(x, y);
    }

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    if(ofVec2f(x,y).distance(ball) < 20){
        ball.set(x, y);
        dragging = true;
        vel *= 0;
    
    }
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

    dragging = false;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
