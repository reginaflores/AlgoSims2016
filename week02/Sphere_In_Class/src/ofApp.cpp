#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    num = 1000;
    
    //Arrays (vectors) initialize the arrays
    for(int i = 0; i < num; i++){
        ofPoint p; //temp
        points.push_back(p);
        
        float t;
        theta.push_back(t);
        
        float ph;
        phi.push_back(ph);
        
        int r;
        radius.push_back(r);
        
        //changing angles
        float chph;
        changePhi.push_back(chph);
        
        float cht;
        changeTheta.push_back(cht);
        
        
        
        //Make the sphere:
        
        
        theta[i] = ofRandom(0,2*PI);
        phi[i] = ofRandom(0, PI);
        radius[i] = ofRandom(180, 220);
        
        //ofPoint( X, y, z)
        
        points[i] = ofPoint(
            radius[i]*sin(phi[i])*cos(theta[i]),
            radius[i]*sin(phi[i])*sin(theta[i]),
            radius[i]*cos(phi[i])
        );
        
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(29, 144, 213);
    
    cam.begin();
    
    //Subroutine for creating the changeing
    //angles
    for(int i = 0; i<num; i++){
    
        points[i] = ofPoint(
                            radius[i]*sin(phi[i])*cos(theta[i]),
                            radius[i]*sin(phi[i])*sin(theta[i]),
                            radius[i]*cos(phi[i])
                            );

        
        theta[i] += changeTheta[i];
        phi[i] += changePhi[i];
    
        if(radius[i] < 200){
        
            radius[i] ++;
        }
        
    }
    
    
    
    for(int i = 0; i <num; i++){
        for(int j=0; j< num; j++){
            ofSetColor(255, 50);
            dist = pow(points[i].x - points[j].x, 2) +
                    pow(points[i].y - points[j].y, 2)+
            pow(points[i].z - points[j].z, 2);
            
//            dist = sqrt(dist);
            
            if( dist < 2000){
            
                ofLine(points[i].x, points[i].y, points[i].z, points[j].x, points[j].y, points[j].z);
            }
        
        }
    }
    
    
    
    
    cam.end();
    
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
