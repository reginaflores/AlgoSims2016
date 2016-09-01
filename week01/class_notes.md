 
## Class Notes

* Numbers from 0-1 
* Linear interpolation: ```myPoss = (1-pct) * a + pct * b``` (note the fancy name for this is , aka LERP)
* Shapers using power: 

	pct = powf(num,exp);
	myPoss = (1-pct) * a + pct * b;

* Xeno: ``myPos = (1-pct) * myPos + pct * targetPos```. based on xeno's paradox.

* Robert Penner’s Easing Equations: [JS](http://gizma.com/easing/) [C++](https://github.com/jesusgollonet/ofpennereasing)

![Kynd’s graphic](https://farm8.staticflickr.com/7346/9546075099_18ccc66a2d_o_d.png)

* Advance shaping functions: [Bezier and Other Parametric Shaping Functions](http://www.flong.com/texts/code/shapers_bez/), [Circular & Elliptical Shaping Functions](http://www.flong.com/texts/code/shapers_circ/), [Exponential Shaping Functions](http://www.flong.com/texts/code/shapers_exp/) and [Polynomial Shaping Functions](http://www.flong.com/texts/code/shapers_poly/)