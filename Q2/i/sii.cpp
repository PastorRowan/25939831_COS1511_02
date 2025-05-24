
/*
Solution (ii):
Have lambda function2 defined inside function1. Can be called inside function1 (modern C++).
*/

#include <iostream>

using namespace std;

void function1() {

    cout << "Inside function function1 " << endl;

    // function2 lambda function definition
    auto function2 = []() -> void {
        cout << "Inside function function1 " << endl;
    };

    // Call function 2 if you want. Will only be available in function1 scope
    function2();

};

// Test solution
int main() {

    cout
        << endl
        << "Solution (ii) output:" << endl
    ;

    // Calling function1 for testing purposes
    function1();

    return 0;

};
