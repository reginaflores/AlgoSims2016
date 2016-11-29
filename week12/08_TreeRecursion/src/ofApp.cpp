#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    bool hasDrawn = false;
    
    /*myBranch.setup(;, <#float _yPos#>, <#float _width#>, <#float _length#>, <#float _splitPercentage#>, <#int _maxSubdivisions#>, <#int _maxSegments#>, <#int _segmentsSinceStart#>, <#float _angle#>, <#float _curvature#>, <#ofColor _color#>);*/

    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    if(ofGetElapsedTimeMillis() > 500 && ofGetElapsedTimeMillis() < 1000 && hasDrawn == false){
        myBranch.setup(ofGetWidth()/2, ofGetHeight()/2, 30, 40, 0.35, 2, 6, 0, -PI/2, 0, ofColor(150, 50, 20));
        hasDrawn = true;
    }

/*
    ofSetColor(0, 0, 0);
    ofRect(0,0, ofGetWidth()/2, ofGetHeight()/2);
    
//Learning the angles of the OF world ....
    ofSetColor(255,0,0);
    ofSetLineWidth(30);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 50*(cos(0)), ofGetHeight()/2 + 50*(sin(0)));
    
    ofSetColor(0,255,0);
    ofSetLineWidth(30);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 50*(cos(PI/4)), ofGetHeight()/2 + 50*(sin(PI/4)));
    
    ofSetColor(0,0,255);
    ofSetLineWidth(30);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 50*(cos(PI/2)), ofGetHeight()/2 + 50*(sin(PI/2)));
    
    
    
    ofSetColor(255,0,0);
    ofSetLineWidth(5);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 100*(cos(3*(PI/4))), ofGetHeight()/2 + 100*(sin(3*(PI/4))));
    
    ofSetColor(0,255,0);
    ofSetLineWidth(5);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 100*(cos(PI)), ofGetHeight()/2 + 100*(sin(PI)));
    
    ofSetColor(0,0,255);
    ofSetLineWidth(5);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 100*(cos(5*(PI/4))), ofGetHeight()/2 + 100*(sin(5*(PI/4))));
    
    
    
    ofSetColor(255,0,0);
    ofSetLineWidth(1);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 200*(cos(3*(PI/2))), ofGetHeight()/2 + 200*(sin(3*(PI/2))));
    
    ofSetColor(0,255,0);
    ofSetLineWidth(1);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 200*(cos(7*(PI/4))), ofGetHeight()/2 + 200*(sin(7*(PI/4))));
    
    ofSetColor(0,0,255);
    ofSetLineWidth(1);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, ofGetWidth()/2 + 200*(cos(2*PI)), ofGetHeight()/2 + 200*(sin(2*PI)));
*/
 
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
    
    ofBackground(125, 125, 125);
    myBranch.setup(ofGetWidth()/2, ofGetHeight()/2, 40, 40, 0.35, 2, 5, 0, -PI/2, 0, ofColor(150, 50, 20));
    
    //FOR REFERENCE

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
