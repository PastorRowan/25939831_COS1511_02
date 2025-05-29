
/*
Error:

There are 2 syntax errors
Syntax errors:
1.
The function header defines theProduct as void return type meaning it does not return anything.
In the function definition it is trying to return an integer.
This is not allowed in C++.
Attempted compilation will result in a compilation error.
2.
The proper using directives are not used

Solution:
Remove the 'return result;' statement.
The code shoud look like:

#include <iostream>

// alternatives is to place the using directive here
// using namespace std;

void theProduct() {

    using namespace std;

    int
        a,
        b,
        c,
        result
    ;

    cout << “Enter three integers “ << endl;
    cin >> a >> b >> c;

    result = a * b * c;

    cout << “Result is “ << result << endl;

};

Note: I rewrote the functions variable declarations to improve readability by removing redundant statements.

*/

#include <iostream>

/**
 * @brief Prompts user to input 3 integers and outputs the result to the console
 * @post Outputs product of 3 input integers to the console
 */
void theProduct() {

    using namespace std;

    int
        a,
        b,
        c,
        result
    ;

    cout << "Enter three integers " << endl;
    cin >> a >> b >> c;

    result = a * b * c;

    cout << "Result is " << result << endl;

};

// Test solution
int main() {

    using namespace std;

    // Format console
    cout
        << endl
        << "Output Q2 (v):" << endl
        << endl
    ;

    // Test function call
    theProduct();

    return 0;

};
