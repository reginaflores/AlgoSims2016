#include "ofApp.h"


// boolean predicate

bool bSort( ofColor a, ofColor b){
    return a.getBrightness() < b.getBrightness();
}


//--------------------------------------------------------------
void ofApp::setup(){

    
    svenImg.load("sven.jpg");
    
    //    This allocates space in the ofImage, both the ofPixels and the ofTexture that the ofImage contains.
    
//    The types of images can be OF_IMAGE_COLOR, OF_IMAGE_COLOR_ALPHA or OF_IMAGE_GRAYSCALE.

    svenRemix.allocate(svenImg.getWidth(), svenImg.getHeight(), OF_IMAGE_COLOR);
    
    int w = svenImg.getWidth();
    int h = svenImg.getHeight();
    
    for (int i = 0; i < w; i++){
        
        vector <ofColor> lineOfPixels;
        
        for (int j = 0; j < h; j++){
            
            ofColor orig = svenImg.getColor(i,j);
            lineOfPixels.push_back(orig);
            
        }
        
        ofSort(lineOfPixels, bSort);
        
        
        for (int j = 0; j < h; j++){
            svenRemix.setColor(i,j,  lineOfPixels[j]);
        }
        
        
        
    }
    svenRemix.update();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    svenImg.draw(0,0);
    svenRemix.draw(svenImg.getWidth(), 0);
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
