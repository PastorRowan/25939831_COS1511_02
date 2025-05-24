
/*
Solution (i):
Move function2 definition outside of function1 definition.
*/

#include <iostream>

using namespace std;

// Function 2 definition outside of function 1
void function2() {

    cout << "Inside function function1 " << endl;

};

// Function 1 definition without function 2 being defined in it
void function1() {

    cout << "Inside function function1 " << endl;

    // Call function 2 if you want. Will be available in global scope
    function2();

};

// Test solution
int main() {

    cout
        << endl
        << "Solution (i) output:" << endl
    ;

    // Calling function1 for testing purposes
    function1();

    return 0;

};
