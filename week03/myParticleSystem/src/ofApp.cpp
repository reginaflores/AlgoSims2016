#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i =0; i < num; i++){
    
        Particle p;
        particles.push_back(p);
        
        particles[i].setup();
        
        color.push_back(ofColor(ofRandom(255), ofRandom(255), ofRandom(255)));
        
    
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    for(int i = 0; i < num; i++){
        
        particles[i].update();
        particles[i].bounding();
    
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0);
    cam.begin();
    
    //write all my draw code between these 2 lines
    
    for(int i = 0; i < num; i++){
        
        ofSetColor(color[i]);
        particles[i].draw();
    }
    
    
    cam.end();

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
