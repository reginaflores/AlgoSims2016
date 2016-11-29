#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    gridWidth = 200;
    gridHeight = 200;
    
    //create the vertices of the mesh
    
    //creates the shape of the object - spehre or a plane
    for(int j=0; j<gridWidth; j++){
        for(int i=0; i<gridHeight; i++){
            
            phi = ofMap(j, 0, gridHeight-1, 0, PI);
            theta = ofMap(i, 0, gridWidth-1, 0, 2*PI);
            
            radius = 250;
            x = radius*cos(theta)*sin(phi);
            y = radius*sin(theta)*sin(phi);
            z = radius*cos(phi);
            
            mesh.addVertex(ofPoint(x, y, z));
            mesh.addColor(ofColor(0,0,0));
        }
    
    }

    //define the indicies
    for(int y=0; y<gridWidth-1; y++){
        for(int x=0; x<gridHeight-1; x++){
            
            i1 = x + gridWidth*y;
            i2 = (x+1) + gridWidth*y;
            i3 = x + gridWidth * (y+1);
            i4 = (x+1)+ gridWidth * (y+1);
            
            mesh.addTriangle(i1, i2, i3);
            mesh.addTriangle(i2, i4, i3);
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

    //TO MAKE JUST THE SPHERE PART - -COMMENT OUT EVERYTHING IN UPDATE:
    
    float time = ofGetElapsedTimef();
    
    for(int j=0; j<gridWidth; j++){
        for(int i=0; i<gridHeight; i++){
    
            int index = i+gridWidth*j;
            ofPoint p = mesh.getVertex(index);
            
            //-1 to remove the slice
            phi = ofMap(j, 0, gridHeight-1, 0, PI);
            theta = ofMap(i, 0, gridWidth-1, 0, 2*PI);
            
            //instead of having the radius fixed, lets use noise to make it undulate
            radius = 250 * (ofNoise(phi*mouseX/200.0, theta*mouseY/200.0, time*0.01));
            
            x = radius*cos(theta)*sin(phi);
            y = radius*sin(theta)*sin(phi);
            z = radius*cos(phi);

            mesh.setVertex(index, ofPoint(x, y, z));
            mesh.setColor(index, ofColor(255, 0,0));
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    cam.begin();
    
    mesh.drawWireframe();
    
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
