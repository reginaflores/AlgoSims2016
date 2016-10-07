#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);

    //create the particles
    num = 1000;

    for(int i =0; i < num; i++){
        
        Particle p;
        flockingParticles.push_back(p);
        flockingParticles[i].init();
    
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
 
    for(int i = 0; i < num; i++){
   
        flockingParticles[i].update(flockingParticles);
        flockingParticles[i].bounding();
    
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0);
	ofSetColor(255);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    
    for(int i = 0; i < num; i++){
        flockingParticles[i].draw();
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
