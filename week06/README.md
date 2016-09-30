
##Week 6 Homework

![Flock](http://i.giphy.com/A7wueTe5SacTe.gif)

##Notes

[Flocking Rules](https://gamedevelopment.tutsplus.com/tutorials/3-simple-rules-of-flocking-behaviors-alignment-cohesion-and-separation--gamedev-3444) or [Boids Pseudocode](http://www.kfish.org/boids/pseudocode.html)

	(1) Alignment
	(2) Cohesion
	(3) Separation



## Review 

* [Chapter 06: Autonomous Agents](http://natureofcode.com/book/chapter-6-autonomous-agents/) of The Nature of Code by Daniel Shiffman. Videos: [6.1](https://vimeo.com/channels/natureofcode/63089178), [6.2](https://vimeo.com/channels/natureofcode/63089177), [6.3](https://vimeo.com/channels/natureofcode/63089179), [6.4](https://vimeo.com/channels/natureofcode/63101109), [6.5](https://vimeo.com/channels/natureofcode/63101108), [6.6](https://vimeo.com/channels/natureofcode/63928276), [6.7](https://vimeo.com/channels/natureofcode/63928275), [6.8](https://vimeo.com/channels/natureofcode/63928274)

### Read

* [Steering Behaviors for autonomous Characters](http://www.red3d.com/cwr/steer/) by [Craig Reynolds](http://www.red3d.com/cwr/)

* [Boids (Simulated Flocking)](http://www.red3d.com/cwr/boids/) by [Craig Reynolds](http://www.red3d.com/cwr/)


### Wach

* [Flocking Inspiraton 1](https://vimeo.com/2481794)
* [Flocking Inspiration 2](https://vimeo.com/98351279)
* [Flocking Inspiration 3](https://vimeo.com/39703241)



###Code

1. Take the examples ```00_Seek``` and ```01_SeekAvoid``` and convert the last one to handle an arbitrary number of cars.

2. Read [Chapter 6.8 and 6.9](http://natureofcode.com/book/chapter-6-autonomous-agents/) of Daniel Shiffman on-line book and make an openFrameworks implementation of Daniel’s path following algorithms

3. After researching [Dan Savage’s 12 principles](http://en.wikipedia.org/wiki/12_basic_principles_of_animation), make a **looping** composition that specifically embodies a minimum of two of these.  Think of this animation as something you'd want to export and put up on your own vimeo page.

4. Squash and stretch really help things come alive.  Build squash and stretch into one of our particle simulations.  When a particle collides, it should squash, and when it's flying at high speed, it should stretch!  Pay attention to which direction it squashes and stretches.  You may want to make particles bigger so it's easier to see.

5. Implement the 4th unofficial rule of flocking we discussed in class. A boid is only considered if it's with another boid's field of vision. 
