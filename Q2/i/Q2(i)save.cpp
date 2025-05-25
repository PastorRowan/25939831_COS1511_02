
/*
Errors:

These errors are all syntax errors

1. cout and endl
cout is a stream object and endl is an I/O manipulator object both apart of the std namespace.
If there were a global using directive before the function definition in the form "using namespace std;"
then the placement of cout and endl are not errors. I am assuming this is the case.
If the using directive was after the function defintion or was not there in the code then this is an error and the code needs
to be changed accordingly.

2. There is a function definition inside a function definition. Since C++ is a compiled language and not an
interpreted language like JavaScript or Python this is not allowed and is classified as a syntax error.
There are multiple solutions to this problem:
(i) Move function2 definition outside of funciton1 definition
(ii) Use lambda functions (modern C++)
(iii) Create a local struct or class and then create a static member function that you call as the inner function

Also I am assuming the reason for defining function2 inside of function1 is for the encapsulation of scope so that function1 scope
only gets access to function2.

I will show all of the solutions for error ii

*/

/*
There is a syntax error.
Because x, y and z.
Solution:
Do x
Code should look like:
int exampleFunction() {
    return 0;
};
*/


/*
int function1() {
    cout << "Inside function function1 " << endl;
    int function2() {
        cout << "Inside function function1 " << endl;
    };
};
*/

/*
Solution (i):
*/

#include <iostream>

using namespace std;

int function2() {
    cout << "Inside function function1 " << endl;
};

int function1() {
    cout << "Inside function function1 " << endl;
    // Call function 2 if you want. Will be available in global scope
    // function2();
};

/*
Solution (ii):
*/

int function1() {
    cout << "Inside function function1 " << endl;
    auto function2 = []() {
        cout << "Inside function function1 " << endl;
    };
    // Call function 2 if you want. Will only be available in function1 scope
    // function2();
};

/*
Solution (iii):
Note: this method also applies to classes. Just make sure the privacy level of function2 is public and not private or protected
*/
int function1() {
    cout << "Inside function function1 " << endl;
    struct Local {
        static void function2() {
            cout << "Inside function function1 " << endl;
        };
    };
    // Call function2 through Local struct namespace as a static member function if you want but will only be available in function1 scope
    // Local::function2();
};

int main() {

    /*
    Solution 1
    */
    cout << "Solution 1 output:" << endl;
    function1();

    return 0;

};
