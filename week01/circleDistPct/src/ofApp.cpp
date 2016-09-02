#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);
    
    for(int i = 0; i < 1000; i++){
    
        circleSpot c;
        c.setup();
        
        spots.push_back(c);
    
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < 1000; i++){
        spots[i].update(ofPoint(mouseX, mouseY));
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i < 1000; i++){
        
//        ofCircle(ofRandom(0,ofGetWidth()), ofRandom(0, ofGetHeight()), 10);
        spots[i].draw();
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
