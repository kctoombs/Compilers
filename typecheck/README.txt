For this project, I started by implementing the visit functions. They were fairly simple and most of them were the same. You simply use the default rule to visit the children and then call the corresponding check function.

For the check functions, I implemented them from the bottom up, starting with the primitives and expressions. For me, these checker functions were easier to implement and by the time I reached the harder functions, I was more familiar with the code because I implemented all of the easier functions first.

One of the challenges I faced was dealing with  an object of a certain type when I needed an object that was of a different type. I solved this by casting certain objects (such as procedure_block) to  different, but very similar, objects (such as procedure_blockImpl).

Another challenge I faced was that a lot of my variables were undefined when I was trying to access them. This was because I neglected to create a new symbol and look up the symbol in the symbol table. At first, I was just assuming that the variables existed and was "calling" them when they weren't even defined yet.
