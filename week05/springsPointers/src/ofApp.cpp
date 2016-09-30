#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    
    for(int i =0; i < 3; i++){
        
        particles[i].setInit(ofPoint(ofRandom(ofGetWidth()),
                                     ofRandom(ofGetHeight())));
    }
    
    particles[0].bFix = true;
    
    //spring array
    springs[0].set(&particles[0], &particles[1]);
    springs[0].restDist = 40;
    springs[1].set(&particles[1], &particles[2]);
    springs[1].restDist = 40;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    particles[0].pos.set(mouseX, mouseY);
    
    for(int i =0; i< 2; i++){
        springs[i].update();
    }
    
    for(int i = 0; i < 3; i++){
        particles[i].addForce(ofPoint(0,0.1));
        particles[i].update();
        particles[i].bounding();
    }
    
}




//--------------------------------------------------------------
void ofApp::draw(){

    for(int i =0; i< 2; i++){
        springs[i].draw();
    }
    
    for(int i = 0; i < 3; i++){

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
