#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for(int i = 0; i < 100; i++){
    
        Ball tempBall;
        tempBall.setInit(ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight())));
        
        balls.push_back(tempBall);
    }
    
    gui.setup();
    
    gui.add(forceSlider.setup(("label", 0.98, 0.01, 1.5)));

}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < 100; i++){
        balls[i].addForce(ofPoint(0, forceSlider));
        balls[i].update();
    
    }

    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    //Cool for loop for only super cool people
    
    for(auto &ball: balls){
        ball.draw();
    }
    
    gui.draw();
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
