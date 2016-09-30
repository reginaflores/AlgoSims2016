#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);

    
    
    for (int i = 0; i < 400; i++){
        particle myParticle;
        
        float x = 500 + 100 * cos ( (i / 200.0) * TWO_PI);
        float y = 500 + 100 * sin ( (i / 200.0) * TWO_PI);
        
        myParticle.setInitialCondition(x,y ,0,0);
        particles.push_back(myParticle);
    }
    
    // change this to
    // for (int i = 0; i < 10; i++){
    // to see a chain
    
    //Note on the modulus math:
//    i    (i+1) (i+1 % 10)
//  ------------------------
//    0     1       1
//    1     2       2
//    2     3       3
//    3     4       4
//    4     5       5
//    5     6       6
//    6     7       7
//    7     8       8
//    8     9       9
//    9     10      0
    
    for (int i = 0; i < particles.size(); i++){
        spring mySpring;
        
        mySpring.distance = 10;
        mySpring.k = 0.2;
        mySpring.particleA = &particles[i];
        mySpring.particleB = &(particles[(i+1)%particles.size()]);

        springs.push_back(mySpring);
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    // on every frame
    // we reset the forces
    // add in any forces on the particle
    // perfom damping and
    // then update
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].resetForce();
    }
    
    for (int i = 0; i < particles.size(); i++){
        
        particles[i].addRepulsionForce(mouseX, mouseY, 200, 0.7f);
        
        for (int j = 0; j < i; j++){
            particles[i].addRepulsionForce(particles[j], 20, 0.1);
        }
    }
    
    for (int i = 0; i < springs.size(); i++){
        springs[i].update();
    }
    
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].bounding();
        particles[i].addDampingForce();
        particles[i].update();
    }


}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(0xffffff);
    
    for (int i = 0; i < particles.size(); i++){
        particles[i].draw();
    }
    
    for (int i = 0; i < springs.size(); i++){
        springs[i].draw();
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
