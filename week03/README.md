
##Week 3 Homework: Particle Systems 

### Review 

* [Chapter 04: Particle Systems](http://natureofcode.com/book/chapter-4-particle-systems/) of The Nature of Code by Daniel Shiffman. Videos: [4.1](https://vimeo.com/channels/natureofcode/60027382), [4.4](https://vimeo.com/channels/natureofcode/60027380), [4.5](https://vimeo.com/channels/natureofcode/60187927), [4.6](https://vimeo.com/channels/natureofcode/60187929), [4.7](https://vimeo.com/channels/natureofcode/60187931), [4.8](https://vimeo.com/channels/natureofcode/60187932)

### Read

* “Chapter 05: Programming Revised” of [Programming Interactivity](http://phylab.fudan.edu.cn/lib/exe/fetch.php?media=yuandi:arduino:programming_interactivity.pdf) by Joshua Noble

* [Chapter on Memory](https://github.com/openframeworks/ofBook/blob/master/chapters/memory/chapter.md) of ofBook by Arturo Castro 

* Start reading [Effective C++](http://ptgmedia.pearsoncmg.com/images/9780321334879/samplepages/0321334876.pdf) by Scott Meyers until “Chapter 06: Inheritance and Object-Oriented Design” include (the chapter 6 is specially important)


### Wach

* [https://vimeo.com/77330591](https://vimeo.com/77330591)

* [https://vimeo.com/38421611](https://vimeo.com/38421611)

* [https://vimeo.com/28304264](https://vimeo.com/28304264)


###Code

(a) Create a looping fireworks animation (non interactive). 

(b) Since you know how to position things in a circle using the formula: 

	x = x_orig + radius * cos (angle); 
	y = y_orig + radius * sin (angle); 

Think about how you could use sinusoidal information to start all the particles with some interesting positions / velocities. Instead of using random, use sinusoidal information (in any way you want) to make the starting positions/velocities of these objects interesting. Can you use sin/cos to make the movement or drawing of the particle more interesting?

(c) Besides evidence to the contrary, particles don’t have to be just circles! you can draw them however you want. Can you create an interesting effect with transparency or by using images? Can you use parameters, like velocity to control the way these objects are drawn (like, they get smaller as they slow down, or more transparent, using angle of the velocity to rotate, etc). Think about trying to create a natural phenomenon or simply something really nice looking to simulate the behavior/structure/growing or composition with particles.