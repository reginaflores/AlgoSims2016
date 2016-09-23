#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    for (int i = 0; i < 100; i++) {
        Ball tempBall;
        //note: ofRandomf() gets a random floating point number.
        //tempBall.setInit(ofPoint(ofGetWidth()*ofRandomf(),ofGetHeight()*ofRandomf()));
        tempBall.setInit(ofPoint(ofRandom(ofGetWidth()),ofRandom(ofGetHeight())));
        balls.push_back(tempBall);
    }
    
    gui.setup();
    gui.add(forceSlider.setup("forceSlider", 0.98, 0.0, 1.5));

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //  Go throught all the balls and update the position
    //
    for (int i = 0; i < balls.size(); i++) {
//        balls[i].addForce(ofVec2f(0,0.98));
        
        balls[i].addForce(ofVec2f(0,forceSlider));
        balls[i].update();
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofSetColor(255);
    
    //  Draw them all
    //
//        for (int i = 0; i < balls.size(); i++) {
//            balls[i].draw();
//        }
    
    
//This is a more conveninet way of writing a for loop
    //only do this if you dont need the index
    //for each loop
    //if you have an array of anything you can loop through each element 1 at a time.
    //when you do the old way, you know you need ball[i] at each iteration, this way is more convient
    //"auto" based on whats on right side, c++ can infer what is on the left
    //"&ball" c++ by default always makes copies. so it would make copies of each element in the loop. by using the "&" you are saying dont copy just reference.
    for (auto &ball: balls) { // Cooler way ;P
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
//    ofPoint mouse = ofPoint(mouseX,mouseY);
//    ofPoint pmouse = ofPoint(ofGetPreviousMouseX(),ofGetPreviousMouseY());
//    
//    ofPoint diff = mouse-pmouse;
//    diff *= 0.1;
//    
//    for (int i = 0; i < balls.size(); i++) {
//        balls[i].addForce(diff);
//    }
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
//    Ball newBall;
//    newBall.setInit(ofPoint(x,y));
//    balls.push_back(newBall);
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
