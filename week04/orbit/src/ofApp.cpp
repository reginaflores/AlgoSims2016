#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    moon.set(100,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    moon.update(0.01, ofPoint(ofGetWidth()*0.5, ofGetHeight()*0.5));

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(0, 0, 255);
    ofCircle(ofGetWidth()*0.5, ofGetHeight()*0.5, 30);
    
    moon.draw();
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
