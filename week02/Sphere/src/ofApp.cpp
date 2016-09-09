#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    num = 2000;
    
    
    for(int i=0; i< num; i++){
        //we need to initliaze all of our arrays
        
        ofPoint p;
        points.push_back(p);
        
        float t;
        theta.push_back(t);
        
        float ph;
        phi.push_back(ph);
        
        int r;
        radius.push_back(r);
        
        
        float chPh;
        changePhi.push_back(chPh);
        
        float cT;
        changeTheta.push_back(cT);
        

    
    //to make the points randomly distributed on the sphere
    //we know that theta ranges from 0-2PI
    //phi ranges from 0-PI
    
        theta[i] = ofRandom(0, 2*PI);
        phi[i] = ofRandom(0,PI);
//        radius[i] = 180; //if you leave a constant number the points will be evenly distributed on the surface
        radius[i] = ofRandom(180, 220);
        
        
        points[i] = ofPoint(
                            radius[i]*cos(theta[i])*sin(phi[i]),
                            radius[i]*sin(phi[i])*sin(theta[i]),
                            radius[i]*cos(phi[i])
                            );
        
        
        changeTheta[i] = ofRandom(0,0.01);
        changePhi[i] = ofRandom(0,0.01);
        
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(29, 144, 213);
    
    //For 3D to work we use cam.begin and end
    
    cam.begin();

    //Subroutine that enables the sphere to have variability in
    //r, theta and phi
    for(int i = 0; i < num; i++){
        
        points[i] = ofPoint(radius[i]*cos(theta[i])*sin(phi[i]), radius[i]*sin(theta[i])*sin(phi[i]), radius[i]*cos(phi[i]));
        
        
//        if(radius[i] < 300){
//            radius[i] ++;
//        }

        noisey = sin(0.01*ofGetFrameNum());
        radius[i] = ofNoise(theta[i]*noisey, phi[i]*noisey)*400;
        
        theta[i] += changeTheta[i];
        phi[i] += changePhi[i];
    }

    
    for(int i=0; i< num; i++){
        for(int j=i+1; j< num; j++){
            ofSetColor(255, 50);
            
            dist = pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2) + pow(points[i].z - points[j].z, 2);
            //            dist = sqrt(dist);
            
            
            //play with this dist for example use mouseX
//            if (dist < 2*mouseX) {
            if (dist < 2*1000) {

                ofSetColor(255, 50);
                ofSetLineWidth(1.5);
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
