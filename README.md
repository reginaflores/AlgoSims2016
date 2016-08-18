**Creative Coding with OpenFrameworks: Alorithms and Simulations FALL 2016**

**PGTE 5566 A, Th 7:00pm - 9:40pm**

**Location:** 6 East 16th Street, Room 1208

**Course Instructor:** Regina Flores Mir, regina.flores@newschool.edu

**Course TA:** Quinzi Tan, qinzi.tan@newschool.edu

All course material will be found, [here](https://github.com/reginaflores/AlgoSims2016).


_Note: The content of this course including the sylabus is taken in  part from my beloved and former professor, [Patricio Gonzalez Vivo](http://patriciogonzalezvivo.com/), one of the greatest teachers I have ever had and from [Zach Leiberman's](http://sfpc.io/) innovative approach on teaching art+code._

## Course Description
This studio course will focus on computer simulations, algorithms and the fundamentals of physics. Students will practice different techniques to improve their ability to observe and think algorithmically. Ultimately, however, this course is about using these skills to produce artistic works and think enable "creative inquiry." 

Different computational techniques and mathematical principles will be presented and it's up to you to gradually incorporate them into your artistic sketches. 

We will start by reviewing the basics of Object Oriented Programming. This will be the foundation of the computer paradigm we will use to code our simulations. We will also cover trigonometric principles to understand the foundations of physics simulations.

Then we will move towards more complex simulations using multiple forces (attraction, repulsion, bouncing, springs, field forces, noise, etc). We will see how collective patterns can emerge from individual behavior.

Several case studies inspired by nature (Flocking Systems, L-Systems, Gray Scott's Reaction-Diffusion, etc.) will be presented together with their computational implementation.

Students will complete weekly homework assignments in addition to presenting both a midterm and final project, applying learned concepts to create computer programs.  


## Course Outline

| WEEK | DATE  | TOPIC                                     |
|:----:|:-----:|:------------------------------------------|
|  01  | 09/01 | OF and Github Setup, ofxAddons, Principles of OOP, Review of Graphics and Motion                              |
|  02  | 09/08 | Oscillation and trigonometry review       |
|  03  | 09/15 | Attraction & Repulsion forces             |         
|  04  | 09/22 | Case Study: Flocking Simulation           |
|  05  | 09/29 | Springs and Pointers                      |
|  06  | 10/06 | **MIDTERM PROJECT PRESENTATIONS**         |              
|  07  | 10/13 | Flow Field and Noise        	            |
|  08  | 10/20 | GLSL Shader simulations                   |
|  09  | 10/27 | Shiny Code Apps with Parametric Design    |
|  10  | 11/03 | Field Trip: Presentations at OpenFrameworks Meetup|          
|  11  | 11/10 | Case Study: Conway & Gray-Scott           |           
|  12  | 11/17 | Case Study: Recursion, Fractals, L-systems|                      
|  13  | 11/24 | **NO CLASS - THANKSGIVING**               |
|  14  | 12/01 | Final project workshop                    |
|  15  | 12/08 | Final project workshop                    |
|  16  | 12/15 | **FINAL PROJECT PRESENTATIONS (w. Guest Crits)**           |

## Learning Outcomes
By the successful completion of this course, students will be able to:

1. Be able to compile and run their own C++ programs in openFrameworks.

2. Have an understanding of how real world physics translates to computer simulations.

3. Be comfortable talking about their work in front of other students.

## Final Grade Calculation
* 5% participation
* 10% attendance 
* 20% homework 
* 30% mid term
* 35% final project

## Materials and Supplies
This course will be based on [openFrameworks](http://openframeworks.cc) C++ toolkit and will use [GitHub.com](https://github.com/) as the online platform to share code, research notes and papers and deliver homework. (Please read and follow the [setup](Setup.md) document BEFORE coming to class.)  

You may find additional help and inspiration in the examples contained in the following repositories:

* [Algo2012](http://github.com/ofZach/algo2012) by [Zach Lieberman](http://thesystemis.com/)
* [Algo2013](https://github.com/cwhitney/algo2013) by [Charly Whitney](http://www.sharkbox.com/)
* [Sims2014](https://github.com/patriciogonzalezvivo/sims2014) by [Patricio Gonzalez Vivo](http://patriciogonzalezvivo.com/)
* [Animation by Code 2015](https://github.com/bschorr/OFAnimation_Spring2015) by [Bernardo Schorr](https://github.com/bschorr)
* [Creative Coding 2015](https://github.com/conorrussomanno/CreativeCoding_oF_F15) by [Conor Russomanno](https://github.com/conorrussomanno)

##### C++ and oF
Because we will code in C++, the sooner you get comfortable with it the better. There is A LOT of helpful extra material:

* [ofBook](https://github.com/openframeworks/ofBook/tree/master/chapters)

* [Stanford University - CS107 - Programming Paradigms](http://videolectures.net/stanfordcs107s08_programming_paradigms/) by Jerry Cain

* [Effective C++](http://www.amazon.com/Effective-Specific-Improve-Programs-Designs/dp/0321334876/ref=sr_1_23?ie=UTF8&qid=1408141753&sr=8-23&keywords=c%2B%2B) by Scott Meyers

As regular consulting material you will probably want to have the following links pre-bookmarked on your browser:

* [cplusplus.com](http://www.cplusplus.com/) (Note you may like [Dash](http://kapeli.com/dash) on MacOS)

* [OpenFrameworks Forum](http://forum.openframeworks.cc/) 

* [OpenFrameworks IRC Channel](http://webchat.freenode.net/?channels=openframeworks&uio=MT1mYWxzZSY5PXRydWUmMTE9Mjk39)

* StackOverFlow [C++](http://stackoverflow.com/questions/tagged/c%2b%2b), [CodeBlocks](http://stackoverflow.com/questions/tagged/codeblocks) & [Xcode](http://stackoverflow.com/questions/tagged/xcode) (There is an openFrameworks tag, but is better if you use the OF-forum for questions.)

##### Algorithms and Simulation
There are a huge number of papers, books and examples online about algorithms and simulation. Not all of them are in C++, but hopefully you will train yourself to interpret and translate them. Here are some friendly approaches:

* [Nature of Code](http://natureofcode.com/book/) by Daniel Shiffman

* [FORM+CODE](http://www.amazon.com/Form-Code-Design-Architecture-Briefs/dp/1568989377/ref=pd_sim_b_5?ie=UTF8&refRID=1JSMXNRNDJXKC5N91R2J) by Casey Reas

* [Generative Design](http://www.amazon.com/dp/1616890770/ref=wl_it_dp_o_pC_nS_ttl?_encoding=UTF8&colid=2P8RIIKRMUEMF&coliid=I5PWJK09L1FVH) by Hartmut Bohnacker, Benedikt Gross, Julia Laub and Claudius Lazzeroni

* [The Computational Beauty of Nature](http://www.amazon.com/gp/product/0262561271/ref=oh_aui_detailpage_o07_s00?ie=UTF8&psc=1) by Gary William Flake ( [here](https://github.com/gwf/CBofN) are the code examples from the book)

* [The Algorithmic Beauty of Plants](http://algorithmicbotany.org/papers/abop/abop.pdf) by Przemyslaw Prusinkiewicz and Aristid Lindenmayer

* [Golan’s](http://golancourses.net/2013/lectures/lecture-01-30/) class notes of Generative Art

##### GLSL Shaders
We will speak briefly about shaders and their implementation in OF. Here are some resources:

* [The Book of Shaders](http://patriciogonzalezvivo.com/2015/thebookofshaders/) by [Patricio Gonzalez Vivo](http://patriciogonzalezvivo.com/)
* [Shader Studio 2015](https://github.com/patriciogonzalezvivo/ss2015) by [Patricio Gonzalez Vivo](http://patriciogonzalezvivo.com/)
* [Shader Toy](https://www.shadertoy.com/)



## Grading Standards

- A	Work of exceptional quality 
- A-	Work of high quality
- B+	Very good work
- B 	Good work; satisfies course requirements 
Satisfactory completion of a course is considered to be a grade of B or higher.
- B-	Below-average work
- C+ 	Less than adequate work
- C 	Well below average work
- C-	Poor work; lowest possible passing grade
- F	Failure
- GM	Grade missing for an individual

Grades of D are not used in graduate level courses.

### Grade of W
The grade of W may be issued by the Office of the Registrar to a student who officially withdraws from a course within the applicable deadline. There is no academic penalty, but the grade will appear on the student transcript. A grade of W may also be issued by an instructor to a graduate student (except at Parsons and Mannes) who has not completed course requirements nor arranged for an Incomplete.
### Grade of Z
The grade of Z is issued by an instructor to a student who has not attended or not completed all required work in a course but did not officially withdraw before the withdrawal deadline. It differs from an “F,” which would indicate that the student technically completed requirements but that the level of work did not qualify for a passing grade. 

### Grades of Incomplete 
The grade of I, or temporary incomplete, may be granted to a student under unusual and extenuating circumstances, such as when the student’s academic life is interrupted by a medical or personal emergency. This mark is not given automatically but only upon the student’s request and at the discretion of the instructor. A Request for Incomplete form must be completed and signed by student and instructor. The time allowed for completion of the work and removal of the “I” mark will be set by the instructor with the following limitations: 

**Graduate students** Work must be completed no later than one year following the end of the class. Grades of “I” not revised in the prescribed time will be recorded as a final grade of “WF” (for Parsons and Mannes graduate students) or “N” (for all other graduate students) by the Office of the Registrar. The grade of “N” does not affect the GPA but does indicate a permanent incomplete. 

### Divisional, Program and Class Policies

● **Responsibility**
Students are responsible for all assignments, even if they are absent.  Late assignments, failure to complete the assignments for class discussion and/or critique, and lack of preparedness for in-class discussions, presentations and/or critiques will jeopardize your successful completion of this course.  

● **Participation** 
Class participation is an essential part of class and includes: keeping up with reading, assignments, projects, contributing meaningfully to class discussions, active participation in group work, and coming to class regularly and on time.  

● **Attendance**
Parsons’ attendance guidelines were developed to encourage students’ success in all aspects of their academic programs. Full participation is essential to the successful completion of coursework and enhances the quality of the educational experience for all, particularly in courses where group work is integral; thus, Parsons promotes high levels of attendance. Students are expected to attend classes regularly and promptly and in compliance with the standards stated in this course syllabus. While attendance is just one aspect of active participation, absence from a significant portion of class time may prevent the successful attainment of course objectives. A significant portion of class time is generally defined as the equivalent of three weeks, or 20%, of class time. Lateness or early departure from class may be recorded as one full absence. Students may be asked to withdraw from a course if habitual absenteeism or tardiness has a negative impact on the class environment.Whether the course is a lecture, seminar or studio, faculty will assess each student’s performance against all of the assessment criteria in determining the student’s final grade.● **Canvas** 
Use of Canvas may be an important resource for this class. Students should check it for announcements before coming to class each week.  

● **Delays**
In rare instances, I may be delayed arriving to class.  If I have not arrived by the time class is scheduled to start, you must wait a minimum of thirty minutes for my arrival.  In the event that I will miss class entirely, a sign will be posted at the classroom indicating your assignment for the next class meeting.

● **Electronic Devices** 
The use of electronic devices (phones, tablets, laptops, cameras, etc.) is permitted when the device is being used in relation to the course's work. All other uses are prohibited in the classroom and devices should be turned off before class starts.

● **Academic Honesty and Integrity**
Compromising your academic integrity may lead to serious consequences, including (but not limited to) one or more of the following: failure of the assignment, failure of the course, academic warning, disciplinary probation, suspension from the university, or dismissal from the university.Students are responsible for understanding the University’s policy on academic honesty and integrity and must make use of proper citations of sources for writing papers, creating, presenting, and performing their work, taking examinations, and doing research. It is the responsibility of students to learn the procedures specific to their discipline for correctly and appropriately differentiating their own work from that of others. The full text of the policy, including adjudication procedures, is found at [http://www.newschool.edu/policies/#](http://www.newschool.edu/policies/#) Resources regarding what plagiarism is and how to avoid it can be found on the Learning Center’s website: [http://www.newschool.edu/university-learning-center/student-resources/](http://www.newschool.edu/university-learning-center/student-resources/)The New School views “academic honesty and integrity” as the duty of every member of an academic community to claim authorship for his or her own work and only for that work, and to recognize the contributions of others accurately and completely. This obligation is fundamental to the integrity of intellectual debate, and creative and academic pursuits. Academic honesty and integrity includes accurate use of quotations, as well as appropriate and explicit citation of sources in instances of paraphrasing and describing ideas, or reporting on research findings or any aspect of the work of others (including that of faculty members and other students). Academic dishonesty results from infractions of this “accurate use”. The standards of academic honesty and integrity, and citation of sources, apply to all forms of academic work, including submissions of drafts of final papers or projects. All members of the University community are expected to conduct themselves in accord with the standards of academic honesty and integrity. Please see the complete policy in the Parsons Catalog. 
● **Student Disability Services** (SDS)
In keeping with the University’s policy of providing equal access for students with disabilities, any student with a disability who needs academic accommodations is welcome to meet with me privately.  All conversations will be kept confidential.  Students requesting any accommodations will also need to meet with Jason Luchs in the Office of Student Disability Services, who will conduct an intake, and if appropriate, provide an academic accommodation notification letter to you to bring to me.  SDS assists students with disabilities in need of academic and programmatic accommodations as required by the Americans with Disabilities Act of 1990 (ADA) and Section 504 of the Federal Rehabilitation Act of 1973. http://www.newschool.edu/studentservices/disability/.

● **Intellectual Property Rights** [http://www.newschool.edu/policies/#](http://www.newschool.edu/policies/#)

