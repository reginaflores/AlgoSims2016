//
//  VectorField.cpp
//  00_SimpleVectorField
//
//  Created by Regina Flores on 10/24/16.
//
//

//magnetic field has a magnitude and direction. The magnitude is the amount of force on the particle and the direction controls which way the particles face.

#include "VectorField.hpp"


//50 cols
//1024 / 20
void VectorField::setup(int _w, int _h, int  _res){
    width = _w;
    height = _h;
    res = _res; // passing in 20, so the space between each dot is 20 pixels
    
    cols = width / res;
    rows = height / res;
    
    for(int x = 0; x < cols; x++){
        
        vector<ofPoint> column;
        
//        http://www.cplusplus.com/reference/vector/vector/resize/
        
        column.resize(rows); //when you create an array there is a size that is reserved in the space in your ram. (stack = fast, heap = slow) when you create an array it goes on the stack. to dynamically add to an array, it gets added to the heap. to avoid having to create everything on the heap, you can resize the array beforehand. by setting the size beforehand you are creating contiguous memory on the heap which makes it easier to work with.
        table.push_back(column);
        
        for(int y = 0; y < rows; y++){
            //note that table[x] is a 1D array and table[x][y] is an ofPoint
            table[x][y] = ofPoint(ofRandom(-10,10),ofRandom(-10,10)); //this is the vector field!
//            table[x][y] = ofPoint(5,5);

        }
    }
}

//
void VectorField::setNoise(float _time){
    for (int x = 0; x < table.size(); x++) {
        for (int y = 0; y < table[x].size(); y++) {
            float noise = ofMap( ofNoise(x*0.05, y*0.05, _time*0.1), 0, 1, 0, TWO_PI);
            table[x][y] = ofPoint( cos(noise), sin(noise) ); //range is from -1, 1. So the total length of the line is 1, so you will only ever see a line with a max length of 1. Which on the screen looks like a dot.
        }
    }
}

void VectorField::draw(){
    for (int x = 0; x < table.size(); x++) {
        for (int y = 0; y < table[x].size(); y++) {
            ofPushMatrix();
            ofTranslate(x*res, y*res); //assume your screen width is 1000 and res is 20, then cols = 1000/20 = 50 ==> so that means there will be 50 dots. so to get to the pixel you want to draw at you have to multiply back ==>50*res = 1000
            ofLine(ofPoint(0,0), table[x][y]);
            ofPopMatrix();
        }
    }
}

//////////////////////////////////////

//getForce will return an ofPoint. Returns a force vector
ofPoint VectorField::getForce(ofPoint _pos){
    _pos /= res;
    
    //in the real world a vector field is defined for all points. So you could pass in 1.5, 1.5, but because table[x][y] can only be indexed by integers, we need to convert the x,y into integers.
    //if cols is 10, then table has 10 vectors. so size 10, then the valid indexes are 0 to 9.
    int x = ofClamp(int(_pos.x),0, cols-1);
    int y = ofClamp(int(_pos.y),0, rows-1);
    
    return table[x][y];
}

//This is decreasing the force of the vecotr field by 1%
void VectorField::update(){
    for (int x = 0; x < table.size(); x++) {
        for (int y = 0; y < table[x].size(); y++) {
            table[x][y] *= 0.99; //try setting to 0.1 and seeing the effects this has on the particles
        }
    }
}










