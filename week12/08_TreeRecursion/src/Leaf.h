//
//  Leaf.h
//  Branches
//
//  Created by Conor Russomanno on 9/17/15.
//
//

#ifndef __Branches__Leaf__
#define __Branches__Leaf__

#include "ofMain.h"

class Leaf {
    
public:
    
    void setup();
    void update();
    void draw(float _xPos, float _yPos);
    
    // stuff pertaining to each instance of the Leaf class
private:
    
    ofColor stemColor;
    ofColor leafColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    float leafCurvature;
    
};

#endif /* defined(__Branches__Leaf__) */
