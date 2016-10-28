//
//  VectorField.cpp
//  00_SimpleVectorField
//
//  Created by Regina Flores on 10/27/16.
//
//

#include "VectorField.hpp"

void VectorField:: setup(int _w, int _h, int _res){

    width = _w;
    height = _h;
    res = _res;
    
    cols = width / res;
    rows = height / res;
    
    //screen 1024
    //res = 20 ==> ~50 cols
    
    for(int x = 0; x < cols; x++){
        //////
        vector<ofPoint> column;
        column.resize(rows); //take a look at this http://www.cplusplus.com/reference/vector/vector/resize/
        table.push_back(column);
        ////
        for(int y = 0; y< rows; y++){
            //this is the vector field!
            table[x][y] = ofPoint(ofRandom(-10, 10), ofRandom(-10, 10));

        }
    }
}

void VectorField::setNoise(float _time){
    
    for(int x = 0; x< table.size(); x++){
        for(int y = 0; y< table[x].size(); y++){
            float noise = ofMap(ofNoise(x*0.5, y*0.5, _time*0.1), 0,1, 0, TWO_PI);
            table[x][y] = ofPoint(cos(noise)*10, sin(noise)*10);
        }
    }
}

void VectorField::draw(){

    for(int x = 0; x< table.size(); x++){
        for(int y = 0; y< table[x].size(); y++){
            
            ofPushMatrix();
            ofTranslate(x*res, y*res);
    
            ofLine(ofPoint(0,0), table[x][y]);
            ofPopMatrix();
            
        }
    }
}

ofPoint VectorField::getForce(ofPoint _pos){

    _pos /= res;

    int x = ofClamp(int(_pos.x), 0, cols - 1);
    int y = ofClamp(int(_pos.y), 0, rows -1);
    
    return table[x][y];
}

void VectorField::update(){
    
    for(int x = 0; x< table.size(); x++){
        for(int y = 0; y< table[x].size(); y++){
     
            table[x][y] *= 0.1;
        
        }
    }
}














