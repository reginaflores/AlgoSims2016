#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //setting up the grid
    
    ptsW = 20;
    ptsH = 20;
    
    for(int i = 0; i< ptsW; i++){
        for(int j = 0; j < ptsH; j++){
            
            float x = ofMap(i,0, ptsW, 0,ofGetWidth());
            float y = ofMap(j,0, ptsH, 0,ofGetHeight());
            
            Particle tempP;
            tempP.setInitialCondition(ofPoint(x,y), ofPoint(0,0));
            particles.push_back(tempP);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //Magic Sauce:
    // on every frame
    // we reset the forces
    // add in any forces on the particle
    // perfom damping and
    // then update
    
    int count = 0;
    
    for(int i = 0; i< ptsW; i++){
        for(int j = 0; j < ptsH; j++){
            
            float x = ofMap(i,0, ptsW, 0,ofGetWidth());
            float y = ofMap(j,0, ptsH, 0,ofGetHeight());
            
            particles[count].resetForce();
            particles[count].addAttractionForce(ofPoint(x,y), 2000, 0.1);
            particles[count].addRepulsionForce(ofPoint(mouseX, mouseY), 200, 0.2);

            particles[count].addDampingForce();
            particles[count].update();

            
            count++;
            
        }
    }

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(255,20,147);
    ofSetColor(0);
    for(int i =0; i< particles.size(); i++){
    
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
