
/*
Error:

There is a logic error in the code.
the parameter 'a' gets overwritten by the statement within the function definition 'float a'.
This will result in float a being an undefined value since it is not assigned a value after that.
The console output should be a random float value every function call (undefined behaviour).
There is no using namespace std; line either which will result in compilation error

Solution:
#include <iostream>
void aFunction(float a) {
    using namespace std;
    cout << a << endl;
};
*/

#include <iostream>

/**
 * Outputs float to console
 * @param a - float parameter
 * @post - outputs float a to console
 */
void aFunction(float a) {
    using namespace std;
    cout << a << endl;
};

// Tests solution
int main() {

    using namespace std;

    const float
        TEST_NUMBER = 2.f
    ;

    // Test console output
    cout
        << endl
        << "Output Q2 (iii):" << endl
        << endl
    ;

    aFunction(TEST_NUMBER);

    return 0;

};
