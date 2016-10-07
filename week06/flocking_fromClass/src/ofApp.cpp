#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    num = 1000;
    
    for(int i = 0; i< num; i++){
    
        Particle temp;
        particles.push_back(temp);
        particles[i].init();
    
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i< num; i++){
        particles[i].update(particles);
        particles[i].bounding();
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    for(int i = 0; i< num; i++){
        particles[i].draw();
        
    }

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
