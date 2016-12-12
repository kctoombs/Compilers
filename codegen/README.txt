****VERY IMPORTANT****
There is a very strange bug in this code. Whenever I run the command "./csimple < test.txt > csimple.s" where test.txt is my test file, it adds a bunch of random text to the very beginning of the csimple.s file. From what I have seen so far, this only happens when the code contains variable declarations. If you go into the csimple.s and delete all of the text that is printed before the ".text", then it will run fine. 
The best way I have found to test is by following these steps:
1. ./csimple < test.txt > csimple.s
2. Delete text in csimple.s up until ".text" is reached
3. gcc -c -m32 -o csimple.o csimple.s
4. gcc -c -m32 -o start.o start.c
5. gcc -m32 -o start start.o csimple.o
6. ./start

I apologize for this inconvenience, but I asked about this in office hours and posted in piazza and I still couldn't find a resolution.

Summary of what I have done:

To start this project, I started with the easier functions, like all of the expressions and logical/mathematical operands. A lot of these functions were very similar to implement. For example, for mathematical and logical operators you must pop the top 2 arguments off of the stack and store them into 2 different registers. Then, perform the operation using the values in those 2 registers, and store the value in a register, and finally push the result back on the stack.

For the comparison operations, I popped the top 2 values from the stack, once again storing them in different registers. After this, I compared them and then called the corresponding comparison function. Based on the result of the comparison, I pushed a 1 (if true) or a 0 (if false) onto the stack. To do this, if the comparison evaluated to true, I used a jump statement to skip over pushing a 0 onto the stack and pushed a 1 onto the stack. If the comparison evaluated to false, then I fell through to the code below and pushed a 0 onto the stack, and then used a jump instruction to jump over pushing a 1 onto the stack.

I feel like I have a fairly good grasp on the concept of While and IfWithElse, but I could not perfect them.

FUNCTIONS THAT WORK:
Return
Assignment
IfNoElse
Compare
Noteq
Gt
Gteq
Lt
Lteq
And
Or
Minus
Plus
Times
Div
Not
Uminus

Below, I talk about the main idea of how I would have approached certain functions:

StringAssignment(): For this function, I would have visited the children, and iterated over the string, pushing each character onto the stack.

AbsoluteValue(): For this function, I would have resolved the expression within the absolute value brackets. If it was an integer, I would have made it positive if it was less than 0 and then pushed it onto the stack, or just pushed it onto the stack if it was greater than 0.

If I had more time, I probably could have gotten a lot more done on this project, but I had finals Monday, Tuesday, and Wednesday. I'm not looking for sympathy, I just wanted to let you know so that you didn't think that I just didn't put any effort into the project.

ArrayElement: For this function, I would have resolved the expression that was within the brackets following the array identifier (i.e. the index). Then, I would visit the array variable, and iterate through its components until I reached the correct index. I would then push this value onto the stack.

