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
		
    
    //To make something 3D in OF we use the Easy Cam
    
    ofEasyCam cam;
    
    vector<ofPoint> points;
    
    vector<float> theta;
    vector<float> phi;
    vector<int> radius;
    
    
    vector<float> changeTheta;
    vector<float> changePhi;
    
    int num;
    
    float dist;
    float noisey;
};
