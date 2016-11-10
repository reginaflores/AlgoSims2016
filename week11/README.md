##Week 11 Homework: GLSL Shader Simulations 

![shader](http://poniesandlight.co.uk/img/flat_shading_teaser.jpg)

###Notes on GLSL Pixel Shaders:

* Shaders give you total control over the pixels rendered on the screen at a super fast speed. This is why they're used in all sort of cases, from video filters on cellphones to incredible 3D video games.
* Shaders are a set of instructions, but the instructions are excecuted all at once for every single pixel on the screen.
* Shaders are fast because of parallel processing - tiny microprocessors running in parallel at the same time. That’s what a Graphic Processor Unit (GPU) is. Shaders run on the GPU not the CPU.
* On the GPU allows special math functions are accelerated via hardware, so complicated math operations are resolved directly by the microchips instead of by software. That means extra fast trigonometrical and matrix operations - as fast as electricity can go.
* GLSL stands for openGL Shading Language (or Graphics Language Shading Language), which is the specific standard of shader programs. 

####Your first Shader:

	#ifdef GL_ES
	precision mediump float;
	#endif
	
	void main() {
		gl_FragColor = vec4(1.0,0.0,1.0,1.0);
	}	
* Shader Language has a single main function that returns a color at the end. This is similar to C.
* The final pixel color is assigned to the reserved global variable gl_FragColor.
* This C-flavored language has built in *variables* (like gl_FragColor), *functions* and *types*. In this case we've just been introduced to vec4 that stands for a four dimensional vector of floating point precision. Later we will see more types like vec3 and vec2 together with the popular: float, int and bool.
* If we look closely to the vec4 type we can infer that the four arguments respond to the RED, GREEN, BLUE and ALPHA channels. Also we can see that these values are normalized, which means they go from 0.0 to 1.0.
* The last, and maybe most important, detail is that GLSL specs don’t guarantee that variables will be automatically casted. What does that mean? Manufacturers have different approaches to accelerate graphic card processes but they are forced to guarantee minimum specs. Automatic casting is not one of them. If you want to make good consistent code and not spend hours debugging white screens, get used to putting the point ( . ) in your floats. 

####Uniforms:
* GPU manages large numbers of parallel threads, each one responsible for assigning the color to a fraction of the total image. Although each parallel thread is blind to the others, we need to be able to send some inputs from the CPU to all the threads. Because of the architecture of the graphic card those inputs are going to be equal (uniform) to all the threads and necessarily set as read only. In other words, each thread receives the same data which it can read but cannot change.
	
		uniform vec2 u_resolution; // Canvas size (width,height)
		uniform vec2 u_mouse;      // mouse position in screen pixels
		uniform float u_time;     // Time in seconds since load 
	
* You can picture the uniforms like little bridges between the CPU and the GPU.

		#ifdef GL_ES
		precision mediump float;
		#endif
		
		uniform float u_time;
		
		void main() {
			gl_FragColor = vec4(abs(sin(u_time)),0.0,0.0,1.0);
		}

* In the same way GLSL gives us a default output, vec4 gl_FragColor, it also gives us a default input, vec4 gl_FragCoord, which holds the screen coordinates of the pixel or screen fragment that the active thread is working on. With vec4 gl_FragCoord, we know where a thread is working inside the billboard. In this case we don't call it uniform because it will be different from thread to thread, instead gl_FragCoord is called a varying.

		#ifdef GL_ES
		precision mediump float;
		#endif
		
		uniform vec2 u_resolution;
		uniform vec2 u_mouse;
		uniform float u_time;
		
		void main() {
			vec2 st = gl_FragCoord.xy/u_resolution;
			gl_FragColor = vec4(st.x,st.y,0.0,1.0);
		}



###Notes on Shaders in OF:

####Verticies:
Rendering an ofMesh start out as some vertex buffers on the CPU side that get filled with arrays of vertex attributes like colors or positions or texture coordinates. These attributes are used as the inputs into the vertex shader, this is what you're working with in your vertex shader. When you call draw() on an ofMesh the indexes control how the vertices get assembled into triangles later on.

####Vertex Shader:
The GPU begins by reading each selected vertex out of the vertex array and running it through the vertex shader, a program that takes a set of vertex attributes as inputs and outputs a new set of attributes, referred to as varying values, that get fed to the rasterizer. At a minimum, the vertex shader calculates the projected position of the vertex in screen space. The vertex shader can also generate other varying outputs, such as a color or texture coordinates, for the rasterizer to blend across the surface of the triangles connecting the vertex.

**Vertex Shader in OF:
**
		
		#version 120
		
		uniform mat4 modelViewProjectionMatrix;
		
		void main(){
		    gl_Position = gl_ProjectionMatrix * gl_ModelViewMatrix * gl_Vertex;
		}

####Fragment Shader:
The generated fragments then pass through another program called the fragment shader. The fragment shader receives the varying values output by the vertex shader and interpolated by the rasterizer as inputs. It outputs color and depth values that then get drawn into the framebuffer. Common fragment shader operations include texture mapping and lighting. Since the fragment shader runs independently for every pixel drawn, it can perform the most sophisticated special effects; however, it is also the most performance-sensitive part of the graphics pipeline.

**Frag File in OF:** (Note that the header is a little different) 
		
		#version 120
		
		uniform vec2 resolution;
		
		void main( void ) {
		    vec2 p = gl_FragCoord.xy / resolution.y;
		    gl_FragColor = vec4(p.x, p.y, 0.5, 1.0);
		}


		void ofApp::draw(){
		    ofShader shader;
		    shader.load("","shader.frag");
		
		    shader.begin();
		    shader.setUniform1f("u_time", ofGetElapsedTimef());
		    shader.setUniform2f("u_resolution", ofGetWidth(), ofGetHeight());
		    ofRect(0,0,ofGetWidth(), ofGetHeight());
		    shader.end();
		}

**Then in OF draw function:
**

		void ofApp::draw(){
		
		    myShader.load("noise.vert","noise.frag");
		    myShader.begin();
		    myShader.setUniform2f("resolution", ofGetWidth(), ofGetHeight());
		    ofRect(0, 0, ofGetWidth(), ofGetHeight());
		    
		    myShader.end();
		}


* openFrameworks will search for your shader files in the data folder, so don’t forget to copy the .frag and .vert files you want to use and change the name when you load them.




### Review 

* [Meshes in Cinder](http://www.creativeapplications.net/tutorials/guide-to-meshes-in-cinder-cinder-tutorials/)
* [Geometry, Textures & Shader with processing](http://www.creativeapplications.net/processing/geometry-textures-shaders-processing-tutorial/)

### Read

* [The Book of Shaders](http://patriciogonzalezvivo.com/2015/thebookofshaders/) by the great Patricio Gonzalez Vivo. You must read the "Introduction" and the "Getting Started" section!
* [Mastering OF - Chapter 7 - Drawing in 3D](http://www.academia.edu/4978694/Mastering_openFrameworks_-_Chapter_7_Drawing_in_3D)
* [Introducing Shaders](http://openframeworks.cc/ofBook/chapters/shaders.html) from the ofBook.
* [Chapter 13: Graphics and openGL](https://books.google.com/books?id=sAsHA1HM1WcC&pg=PA529&lpg=PA529&dq=glvertex3f+openframeworks&source=bl&ots=KGE9_9bxs9&sig=Rc13b-zBbtWF1ZmK5gCJeBmW7I0&hl=en&sa=X&ved=0ahUKEwiOzPu1-p7QAhUk5YMKHfJcB4EQ6AEILzAC#v=onepage&q=glvertex3f%20openframeworks&f=false) in Programming Interactivity. 
* Optional reading is the [Shader on the RaspberryPI tutorial](http://www.creativeapplications.net/tutorials/how-to-use-openframeworks-on-the-raspberrypi-tutorial/).

###Watch
* [Intro to FBO](https://www.youtube.com/watch?v=oJ6sA7vLPqc) by Lewis Lepton
* [ofTexture](https://www.youtube.com/watch?v=cfyot_pOz64&index=32&list=PL4neAtv21WOmrV8z9rSzL20QpdLU1zJLr) by Lewis Lepton
* [Drawing w FBO and ofxGUI](https://www.youtube.com/watch?v=PxpnVhpfm2s&index=51&list=PL4neAtv21WOmrV8z9rSzL20QpdLU1zJLr) by Lewis Lepton

### Compile and Play

* [OpenFrameworks Shader Examples](https://github.com/openframeworks/openFrameworks/tree/master/examples/shader)

* [Fbo trails example](https://github.com/openframeworks/openFrameworks/tree/master/examples/gl/fboTrailsExample)

* [alphaMaskingShader example](https://github.com/openframeworks/openFrameworks/tree/master/examples/gl/alphaMaskingShaderExample)

* [Multi texture shader example](https://github.com/openframeworks/openFrameworks/tree/master/examples/gl/multiTextureShaderExample)

* [ofxFluid](https://github.com/patriciogonzalezvivo/ofxFluid)


### Code:


1. Play around with shaders and try to use a shader to simulate a natural phenomena.

2. Look at examples 2-8 in the repo, create a mesh using shaders to render the mesh. Add lighting for effect. Add a GUI to modulate parameters.  

3. **Final Assignment 2:**

	Narrow down your three concepts for the final project to one concept. Come to the next class with (1) a clear concept slide on what you intend to make and (2) a mock-up of what your final piece will be. The mockup can be a hand drawn sketch or photoshop, but must clearly show what you will make and present as your final piece. I do not want to see code! I want to see that you have thought critically about the elements of your piece. Please do not come to class with a napkin sketch, I am looking to see that you have put in time and consideration into what your final piece will look like. 
	
4. Extra Credit: Choose a simple shader from [ShaderToy](https://www.shadertoy.com/) write on WebGL and convert it to openGL 2.0 (that we use on OF)
	
 