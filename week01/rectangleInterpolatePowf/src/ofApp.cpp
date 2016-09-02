#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(TRUE);
    ofBackground(0);
    
    //initialize the array:
    
    for(int i = 0; i < 10; i++){
        rectangle tempRect;
        myRectangles.push_back(tempRect);
        
        myRectangles[i].posa.x = 0;
        myRectangles[i].posa.y = 10 + i * 20;
        myRectangles[i].posb.x = 400;
        myRectangles[i].posb.y = 10 + i * 20;
        myRectangles[i].shaper = 0.4 + 0.2 *i;
        myRectangles[i].interpolateByPct(0); //initialize to 0
        
    }

    pct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

    pct += 0.003f;
    
    if(pct > 1){
        pct = 0;
    }
    
    for(int i = 0; i<10; i++){
    
        myRectangles[i].interpolateByPct(pct);
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i = 0; i<10; i++){
        ofSetColor(255, 0, 0);
        
        myRectangles[i].draw();
        
    }
    
    for(int i = 0; i<10; i++){
        
        ofLine(0, i*20, ofGetWidth(),i*20);
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
