#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    video.loadMovie("street.mp4");
    video.play();
    video.setVolume(0);
    
    //setup fbo:
    fbo.allocate(videoWidth, videoHeight);
    
    //clear fbo
    fbo.begin();
    ofClear(255, 255, 255, 0);
    fbo.end();
    
    //adding vertices to the grid:
    for(int y=0; y<H; y++){
        for(int x=0; x<W; x++){
        
            mesh.addVertex(ofPoint(
                        (x-W/2)*meshSize,
                        (y-H/2)*meshSize,
                                   0));
            //add texture coordinates which will allow us to bind textures later on in the code:
            mesh.addTexCoord(ofPoint(
                        x *(videoWidth /W),
                        y * (videoHeight/H)
                                     ));
            mesh.addColor(ofColor(255, 255, 255));
        }
    }

    //seting up the triangles:
    for(int y=0; y<H-1; y++){
        for(int x=0; x<W-1; x++){

            int i1 = x + W *y;
            int i2 = x+1 + W *y;
            int i3 = x + W * (y+1);
            int i4 = x+1 + W * (y+1);
            
            mesh.addTriangle(i1, i2, i3);
            mesh.addTriangle(i2, i4, i3);
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

    video.update();
 ////////////////////////////////
    //Map the video to the mesh
    if(video.isFrameNew()){
    
        //how we update our fbo:
        fbo.begin();
        int alpha = 100;
        
        ofEnableAlphaBlending();
        ofSetColor(255, 255, 255, alpha);
        video.draw(0,0);
        ofDisableAlphaBlending();
        
        fbo.end();
        
    }

    fbo.readToPixels(fboPixels);
    image.setFromPixels(fboPixels);
////////////////////////////////
    
////////////////////////////////
    //create dynamic movement based on the video brightness
    //loop through the vertices:
    for(int y=0; y<H-1; y++){
        for(int x=0; x<W-1; x++){
            
            //each vertex index
            int i = x + W * y;
            ofPoint p = mesh.getVertex(i);
            
            float scaleX = videoWidth / W;
            float scaleY = videoHeight / H;
            
            //get the index of the pixel
            // # of pixels in the grid is videoWidth * videoHeight
            //we are mapping the point of the vertex
            //on the mesh to the pixel in the image
            
            int index = ((x*scaleX) + videoWidth * (y*scaleY)) * 4; //fbo has 4 components including alpha
            
            int brightness = fboPixels[index] / distortion;
            
            p.z = brightness;
            
            mesh.setVertex(i, p);
            
            mesh.setColor(i, ofColor(255, 255, 255));
        }
    }
    
}


//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    ofBackground(0);
    //draw mesh:
    image.bind();
    mesh.draw();
//        mesh.drawWireframe();
    image.unbind();
    
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
