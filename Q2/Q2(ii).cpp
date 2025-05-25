
/*
Error:
This is a syntax error where the sum function definition did not return an integer like the function header required.
Attempted compilation will result in a compiler error.

Solution:
Make the function return an integer representing the sum of the 2 parameters.
Remove the result variable because it is redundant code based on its current use.
You could also add const keywords for the parameters to indicate that the function is not supposed to mutate the parameters.
The function should look like this:
int sum(int x, int y) {
    return x + y;
};
*/

#include <iostream>

/**
 * Adds 2 integers together and returns the sum
 * @param x - The first integer
 * @param y - The second integer
 * @pre - Actual parameters x and y were defined and initialised before funciton call (They were assigned integer values)
 * @return - The integer sum of x + y
 */
int sum(int x, int y) {
    return x + y;
};

// Adds 2 integers together
int main() {

    using namespace std;

    // Define test variables
    const int
        TEST_NUMBER_1 = 2,
        TEST_NUMBER_2 = 1
    ;

    // Test console output
    cout
        << endl
        << "Output Q2 (ii):" << endl
        << endl
        << TEST_NUMBER_1 << " + " << TEST_NUMBER_2 << " = " << sum(TEST_NUMBER_1, TEST_NUMBER_2) << endl
        << endl
    ;

    return 0;

};
