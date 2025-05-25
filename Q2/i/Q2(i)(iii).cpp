
/*
Solution (iii):
Have a local struct or class with a static member function2 that can be called within function1.
Note: this method also applies to classes. Just make sure the privacy level of function2 is public and not private or protected
Otherwise function2 cannot be called outside of the class scope.
*/

#include <iostream>

using namespace std;

void function1() {

    cout << "Inside function function1 " << endl;

    // function2 defined as static member of struct Local
    struct Local {
        static void function2() {
            cout << "Inside function function1 " << endl;
        };
    };
    // Call function2 through Local struct namespace if desired but will only be available in function1 scope
    // which can be useful
    Local::function2();

};

// Test solution
int main() {

    // Format console output
    cout
        << endl
        << "Q2 (i) solution (iii) output:" << endl
        << endl
    ;

    // Calling function1 for testing purposes
    function1();

    return 0;

};
