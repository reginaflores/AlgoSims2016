#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    gridWidth = 200;
    gridHeight = 200;
    
    //a series of points connected by lines, aka vertices
    
    int scale = 6;
    // set up the vertices and colors
    //first on the y axis
    for(int y = 0; y < gridWidth; y++){
        //now on the x axis
        for(int x = 0; x < gridHeight; x++){
            //x=0: -600
            //x=200: 600
            //so you are making a grid from -600, 600 counting up by 6
            //to make symetric around 0 and to scale up
            myMesh.addVertex(ofPoint(
                    (x-gridWidth*0.5)*scale,
                    (y-gridHeight*0.5)*scale,
                    0));
            myMesh.addColor(ofColor(0,0,0));
        }
    }
    
    /* 4x4 grid - here are the indicies:
     0   1    2    3
     4   5    6    7
     8   9    10   11
     12  13   14   15
     x=0, y=0
     i1 = 0, i2= 1, i3 = 4, i4 = 5
     x=1, y=0
     i1 = 1, i2 = 2, i3 = 5, i4 = 6
     
     everytime you loop - you get a new square and you split it up into 2 triangles
     
     */
    //set up triangles indices
    //void ofMesh::addTriangle(ofIndexType index1, ofIndexType index2, ofIndexType index3)
    //Adding a triangle means using three of the vertices that have already been added to create a triangle. This is an easy way to create triangles in the mesh. The indices refer to the index of the vertex in the vector of vertices.
    
    //Choosing the verticies that make a triangle:
    //first on the y axis
    //gridwidth-1 --> because we would go off the grid
    for(int y = 0; y < gridWidth-1; y++){
        //now on the x axis
        for(int x = 0; x < gridHeight-1; x++){
            //these formulas are so that you can loop through the squares
            i1 = x + gridWidth * y;
			i2 = x+1 + gridWidth * y;
			i3 = x + gridWidth * (y+1);
			i4 = x+1 + gridWidth * (y+1);
            
            myMesh.addTriangle( i1, i2, i3); //note these are indices
            myMesh.addTriangle( i2, i4, i3);
        }
    }
    setNormals(myMesh);
    myLight.enable();

}

//--------------------------------------------------------------
void ofApp::update(){
    float time = ofGetElapsedTimef();	//Get time
	//Change vertices
	for (int y=0; y<gridHeight; y++) {
		for (int x=0; x<gridWidth; x++) {
            //now loop through every vertex 0, 1, 2, 3, ....
			int i = x + gridWidth * y;			//Vertex index
			ofPoint p = myMesh.getVertex( i );
            
			//Get Perlin noise value
			float perlin = ofNoise( x * 0.05, y * 0.05, time * 0.5 );
            
			//Change z-coordinate of vertex
            //we want to make some cool mesh where the height changes
            p.z = perlin * 100;
			myMesh.setVertex( i, p );
            
			//Change color of vertex
			myMesh.setColor( i, ofColor( perlin*255, perlin * 255, 255 ) );
		}
	}
	setNormals( myMesh );	//Update the normals
    
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofEnableDepthTest();				//Enable z-buffering
    
	//Set a gradient background from white to gray
	ofBackgroundGradient( ofColor( 255 ), ofColor( 128 ) );
    
    cam.begin();
//	ofPushMatrix();						//Store the coordinate system
    
	//Move the coordinate center to screen's center
//	ofTranslate( ofGetWidth()*0.5, ofGetHeight()*0.5, 0 );
    
	//Calculate the rotation angle
//	float time = ofGetElapsedTimef();   //Get time in seconds
//	float angle = time * 20;			//Compute angle. We rotate at speed
	//20 degrees per second
//	ofRotate( 30, 1, 0, 0 );			//Rotate coordinate system
//	ofRotate( angle, 0, 0, 1 );
    
	//Draw mesh
	//Here ofSetColor() does not affects the result of drawing,
	//because the mesh has its own vertices' colors
	myMesh.drawWireframe();
//    myMesh.draw();
    
//	ofPopMatrix();      //Restore the coordinate system
    cam.end();
}


//--------------------------------------------------------------
//Universal function which sets normals for the triangle mesh
void ofApp::setNormals(ofMesh &mesh){
    
    //The number of the vertices
    //mesh is the object you pass in
    int nV = mesh.getNumVertices();
    
    //The number of the triangles
    int nT = mesh.getNumIndices() / 3;
    
    //create a vector of ofPoints
    //norm is taking a parameter nV
    //the array is not taking in the parameter, this is the construction of an object
    //http://www.cplusplus.com/reference/vector/vector/vector/
    //example:
    //    int t=0;
    //    vector<Ball> manyBalls(t);
    //passing in the value to the constructor of vector (see line 213 in the definition of vector, size type n)
    //remeber the resize function: you want to set the size of the vector ahead of time so that it is faster and more efficient
    //note i am passing in the size when i construct the vector
    
    vector<ofPoint> norm( nV ); //Array for the normals
    
    //Scan all the triangles. For each triangle add its
    //normal to norm's vectors of triangle's vertices
    
    //recall vector geometry:
    //looping through each triangle
    
    
    for (int t=0; t<nT; t++) {
        
        //Get indices of the triangle t
        int i1 = mesh.getIndex( 3 * t );
        int i2 = mesh.getIndex( 3 * t + 1 );
        int i3 = mesh.getIndex( 3 * t + 2 );
        
        //casting to const because we dont want to change them
        //also using references to avoid making a copy because making a copy is slow
        
        //a triangle in 3D space creates a plane
        //normal vector is the vector that is at a right angle to the plane
        
        //Get vertices of the triangle
        const ofPoint &v1 = mesh.getVertex( i1 );
        const ofPoint &v2 = mesh.getVertex( i2 );
        const ofPoint &v3 = mesh.getVertex( i3 );
        
        //this is the cross product to get the normal vector:
        //https://en.wikipedia.org/wiki/Cross_product
        
        //a triangle is 3 vertices, but the vectors we want to use in the cross product are the edges of the triangles (the faces)
        
        //take the cross product of the 2 edges and you get the normal vector:
        //.normalized makes the length of the vector 1
        //Compute the triangle's normal
        ofPoint dir = ( (v2 - v1).crossed( v3 - v1 ) ).normalized();
        
        //Accumulate it to norm array for i1, i2, i3
        
        //i1 is the index of a vertex
        //each triangle has its own normal, adding all the normals together that are associated with a vertex
        
        //norm[i1] = norm[i1] + dir
        
        norm[ i1 ] += dir;
        norm[ i2 ] += dir;
        norm[ i3 ] += dir;
    }
    
    //added a bunch of vectors together so lets make sure their length is 1
    //we do this after we add them all together
    
    //Normalize the normal's length
    for (int i=0; i<nV; i++) {
        norm[i].normalize();
    }
    
    //Set the normals to mesh
    mesh.clearNormals();
    mesh.addNormals( norm );
}




