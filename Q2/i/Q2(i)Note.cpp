
/*
Errors:

All errors are syntax errors

1. cout and endl
cout is a stream object and endl is an I/O manipulator object both apart of the std namespace.
If there were a global using directive before the function definition in the form "using namespace std;"
then the placement of cout and endl are not errors. I am assuming this is the case.
If the using directive was after the function defintion or was not there in the code then this is an error and the code needs
to be changed accordingly.

2. There is a function definition inside a function definition.
This is not allowed in C++. Attempted compilation will result in a compilation error.
There are multiple solutions to this problem:
(i) Move function2 definition outside of funciton1 definition
(ii) Use lambda functions (modern C++)
(iii) Have a local struct or class with a static member function that can be called withn function1

I am assuming the reason for defining function2 inside of function1 is for the encapsulation of scope so that function1 scope
only gets access to function2.

3. function1 and function2 return types is int but there is no integer returned in either function definition.
This is not allowed in C++. Attempted compilation will result in a compilation error.
Either we need to return an integer in each function definition or change functions return type to void.
I am going to make the function return type void since there is no indication of function purpose besides console output.

4. A good idea would be to change the name of the function to something more meaningful to the function but I am assuming
this is not apart of the exercise.

I will show all of the solutions for Question 2

*/
