#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    ofEasyCam cam;
    ofMesh myMesh;
    ofLight myLight;

    void setNormals(ofMesh &mesh);

    //grid variables
    int gridWidth;
    int gridHeight;

    int i1;
    int i2;
    int i3;
	int i4;
};
