//
//  Spring.cpp
//  3_Forces
//
//  Created by Regina Flores on 9/29/16.
//
//

#include "Spring.hpp"


spring::spring(){
    particleA = NULL;
    particleB = NULL;
}

//---------------------------------------------------------------------
void spring::update(){
    if ((particleA == NULL) || (particleB == NULL)){
        return;
    }
    
    ofVec2f pta = particleA->pos;
    ofVec2f ptb = particleB->pos;
        
    float ptDistance = (pta - ptb).length();
    float springForce = (k * (distance - ptDistance));
    ofVec2f frcToAdd = (pta-ptb).normalized() * springForce;
    
    particleA->addForce(frcToAdd.x, frcToAdd.y);
    particleB->addForce(-frcToAdd.x, -frcToAdd.y);
}


//---------------------------------------------------------------------
void spring::draw(){
    
    if ((particleA == NULL) || (particleB == NULL)){
        return;
    }
    
    ofLine(particleA->pos.x, particleA->pos.y, particleB->pos.x, particleB->pos.y);
}