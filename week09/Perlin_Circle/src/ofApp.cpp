#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255,0,127);
    
    ofPushMatrix();//{
        ofTranslate( ofGetWindowSize() / 2);
        
        ofBeginShape();
        for (int i = 0; i < 100; i++){
            
            float add = ofNoise(sin((i/100.0)*TWO_PI), ofGetElapsedTimef());  // symetrical because of the use of sin
            
            // we're passing in 2 dimentions here. One is where we are on the circle
            // and the other is a combination of elapsed time and our mouse position. 2D Noise!
            
//            float add = ofNoise(i/20.0f, ofGetElapsedTimef() * 3 * (float)mouseX / (float)ofGetWidth());
//            float add = 1;
            
            // this will draw a circle with a min radius of 200, and a max of 300
            ofVertex( (200 ) * cos((i/100.0)*TWO_PI),
                     (200 ) * sin((i/100.0)*TWO_PI));
//            ofVertex( (200+100*add) * cos((i/100.0)*TWO_PI),
//                     (200+100*add) * sin((i/100.0)*TWO_PI));

        }
        ofEndShape();
        
    //}
    ofPopMatrix();

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
