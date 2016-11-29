//
//  Branch.cpp
//  Branches
//
//  Created by Conor Russomanno on 9/17/15.
//
//

#include "Branch.h"

//--------------------------------------------------------------
void Branch::setup(float _xPos,
                   float _yPos,
                   float _width,
                   float _length,
                   float _splitPercentage,
                   int _maxSubdivisions,
                   int _maxSegments,
                   int _segmentsSinceStart,
                   float _angle,
                   float _curvature,
                   ofColor _color){
    
    // set incoming values based on what was passed in from previous instance of branch
    xPos = _xPos;
    yPos = _yPos;
    width = _width;
    length = _length;
    splitPercentage = _splitPercentage;
    maxSubdivsions = _maxSubdivisions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    
    myLeaf.setup();
    
    // store branch in MAIN vector<> of branches...
    
    cout << "New Branch" << endl;
    cout << "Segment Count = ";
    cout << segmentsSinceStart << endl;
    
//    //draw current branch instance
    ofSetColor(color);
    ofSetLineWidth((int)width);
    ofLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle)); //draw the branch segnment

    //update variables to pass to next sub branch
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = width*(ofRandom(0.5,0.8));
    segmentsSinceStart += 1;
    angle += curvature;
    curvature += ofRandom(0, (float)(2*PI)/360.0);
    
    myLeaf.draw(xPos, yPos);
    
    //RECURSION!
    if (segmentsSinceStart <= maxSegments) {
        //roll the dice... will the branch split into sub-branches???
        if(ofRandom(0, 1) > splitPercentage){ //NO
            Branch subBranch;
            subBranch.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle, curvature, color);
        } else { //YES!!!
            cout << "split" << endl;
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, 3*(PI/8));
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, 3*(PI/8));
            
            subBranch1.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle1, curvature, color);
            
            subBranch2.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle2, curvature, color);
        }
    }  
}

//--------------------------------------------------------------
void Branch::update(){
    
}

//--------------------------------------------------------------
void Branch::draw(){
    
}