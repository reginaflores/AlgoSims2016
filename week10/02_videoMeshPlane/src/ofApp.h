#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    ofVideoPlayer video;
    ofFbo fbo;
    ofMesh mesh;
    
    ofImage image;
    ofPixels fboPixels;
    
    ofEasyCam cam;
    
    //video width and video height
    //MUST be the same w, h of the actual video
    int videoWidth = 450;
    int videoHeight = 360;
    
    int W = 100;
    int H = 100;
    
    int meshSize = 6; //scale to enlargen the mesh
    float distortion = 2; 
    
};














