##Week 11 Homework: GLSL Shader Simulations 

![shader](http://poniesandlight.co.uk/img/flat_shading_teaser.jpg)

###Notes on GLSL Pixel Shaders:

* Shaders give you total control over the pixels rendered on the screen at a super fast speed. This is why they're used in all sort of cases, from video filters on cellphones to incredible 3D video games.
* Shaders are a set of instructions, but the instructions are excecuted all at once for every single pixel on the screen.
* Shaders are fast because of parallel processing - tiny microprocessors running in parallel at the same time. That’s what a Graphic Processor Unit (GPU) is. Shaders run on the GPU not the CPU.
* On the GPU allows special math functions are accelerated via hardware, so complicated math operations are resolved directly by the microchips instead of by software. That means extra fast trigonometrical and matrix operations - as fast as electricity can go.
* GLSL stands for openGL Shading Language (or Graphics Language Shading Language), which is the specific standard of shader programs. 

####Verticies:
Rendering an ofMesh start out as some vertex buffers on the CPU side that get filled with arrays of vertex attributes like colors or positions or texture coordinates. These attributes are used as the inputs into the vertex shader, this is what you're working with in your vertex shader. When you call draw() on an ofMesh the indexes control how the vertices get assembled into triangles later on.

####Vertex Shader:
The GPU begins by reading each selected vertex out of the vertex array and running it through the vertex shader, a program that takes a set of vertex attributes as inputs and outputs a new set of attributes, referred to as varying values, that get fed to the rasterizer. At a minimum, the vertex shader calculates the projected position of the vertex in screen space. The vertex shader can also generate other varying outputs, such as a color or texture coordinates, for the rasterizer to blend across the surface of the triangles connecting the vertex.

####Fragment Shader:
The generated fragments then pass through another program called the fragment shader. The fragment shader receives the varying values output by the vertex shader and interpolated by the rasterizer as inputs. It outputs color and depth values that then get drawn into the framebuffer. Common fragment shader operations include texture mapping and lighting. Since the fragment shader runs independently for every pixel drawn, it can perform the most sophisticated special effects; however, it is also the most performance-sensitive part of the graphics pipeline.






### Review 

* [Meshes in Cinder](http://www.creativeapplications.net/tutorials/guide-to-meshes-in-cinder-cinder-tutorials/)
* [Geometry, Textures & Shader with processing](http://www.creativeapplications.net/processing/geometry-textures-shaders-processing-tutorial/)

### Read

* [The Book of Shaders](http://patriciogonzalezvivo.com/2015/thebookofshaders/) by the great Patricio Gonzalez Vivo. You must read the "Introduction" and the "Getting Started" section!
* [Mastering OF - Chapter 7 - Drawing in 3D](http://www.academia.edu/4978694/Mastering_openFrameworks_-_Chapter_7_Drawing_in_3D)
* [Introducing Shaders](http://openframeworks.cc/ofBook/chapters/shaders.html) from the ofBook.
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

2. Look at the Terrain exmaple from the repo, create a mesh using shaders to render the mesh. Add lighting for effect. Add a GUI to modulate parameters.  

3. **Final Assignment 2:**

	Narrow down your three concepts for the final project to one concept. Come to the next class with (1) a clear concept slide on what you intend to make and (2) a mock-up of what your final piece will be. The mockup can be a hand drawn sketch or photoshop, but must clearly show what you will make and present as your final piece. I do not want to see code! I want to see that you have thought critically about the elements of your piece. Please do not come to class with a napkin sketch, I am looking to see that you have put in time and consideration into what your final piece will look like. 
	
4. Extra Credit: Choose a simple shader from [ShaderToy](https://www.shadertoy.com/) write on WebGL and convert it to openGL 2.0 (that we use on OF)
	
 