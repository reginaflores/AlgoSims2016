#pragma once

#include "ofMain.h"
#include "ofxGui.h"


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
		
    
    ofSpherePrimitive sphere;
    void draw3d();
    
    ofEasyCam cam;
    ofLight light;
    ofMaterial material;
    
    ofTexture sphereTexture;
    ofImage sphereImage;
    
    void deformVerts();
    
    ofxPanel gui;
    ofParameter<bool> drawGui;
    ofParameter<bool> rotate;
    ofParameter<float> deformSpeed;
    ofParameter<float> extrusionRange;
    ofParameter<bool> isFullScreen;
    
    vector<ofPoint> origVertices;
    ofPixels pixels;
    
    ofParameter<bool> doDeform;
};
