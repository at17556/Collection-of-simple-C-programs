binary.c - A denary to 8 bit unsigned binary conversion system which includes a bubble sort.

I made this program starting withthe triangle.c program skeleton code. 

Since I do not know how to collect user inputs yet, I had to re-use the system from the triangle program (./triangle _ _ _).

So first the user inputs 3 numbers using ./binary _ _ _. The program validates the inputs upon entry into the program.
Some of the validation rules include: Only numbers, can't start with 0_ (e.g 01), inputted number can't exceed 255 
(255 is max denary number that can be stored in 8 bits), no negative numbers.

After validation, the strings are converted into numbers and stored in the numbers[] array. They are then sorted using a bubble sort which I made. 

Then the numbers are passed into the function printBinary, where they are converted into 8 bit binary strings and printed. 
The conversion makes use of the modulus function and fills up the array from back->front like a stack.

