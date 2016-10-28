#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    num = 100;
    
    for(int i = 0; i < num; i++){
        addParticle();
    
//            Particle temp;
//            ofVec2f rvel = ofVec2f(ofRandom(1), ofRandom(1)) * 10.0 - 5.0;
//            temp.setup(rvel);
//            particle.push_back(temp);
    }

}
//--------------------------------------------------------------
void ofApp::addParticle(){

    Particle temp;
    ofVec2f rvel = ofVec2f(ofRandom(1), ofRandom(1)) * 10.0 - 5.0;
    temp.setup(rvel);
    particle.push_back(temp);
    
}
//--------------------------------------------------------------
void ofApp::update(){

    for(int i =0; i < num; i++){
        particle[i].update();
        
    }

    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i =0; i < num; i++){
        particle[i].draw();
    
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
