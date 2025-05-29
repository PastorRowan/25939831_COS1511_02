
/*
Error:

This is a syntax error and a logic error

It is very hard to say what the error is since the code is written so poorely.
The function seems to be an attempt to write a recursive factorial function for integers even though its called computeProd.
I don't know if this is allowed in answering the question but I would also rename the function to intFactorial or intFact.
The new heading would be more descriptive for the purpose of the function vs computeProd.

Syntax error:
1   int computeProd(int n) {
2       if (n == 0)
3           return 0;
4       else
5       }
6       n * computeProd(n – 1);
The } on line 5 is placed too early and should be placed after line 6.
There should also be a ; after the closing } for the function defintion.
Attempted compilation will result in a compilation error.
The code shoud look like this:
1   int computeProd(int n) {
2       if (n == 0)
3           return 0;
4       else
5           return n * computeProd(n – 1);
5       };

Logic error:
The function will always output 0 because the base case is when n == 0.
Therefore the last stack frame will return 0.
Therefore the 2nd last stack frame will return n * 0; which will always be 0.
This will result in each subsequent stack frame returning 0.
Then the first stack frame will return 0.
An easy fix would be to return n once n == 1 is reached.
The code should look like this:
1   int computeProd(int n) {
2       if (n == 0)
3           return 0;
4       else if (n == 1) {
5           return n;
6       else
7           return n * computeProd(n – 1);
8       };
*/

#include <iostream>

/**
 * Computes the factorial of an integer
 * @param n - The integer to find the factorial of
 * @pre - Actual parameter n should be assigned a value before function call (not undefined)
 * @return - The facotrial of the number
 */
int computeProd(int n) {
    if (n == 0)
        return 0;
    else if (n == 1) {
        return n;
    } else
        return n * computeProd(n - 1);
};

// Tests solution
int main() {

    using namespace std;

    const int
        TEST_NUMBER = 5
    ;

    // Test console output
    cout
        << endl
        << "Output Q2 (iii):" << endl
        << endl
    ;

    // Outputs 6 x 5 x 4 ... x 1 to console
    cout << TEST_NUMBER;
    for (int i = TEST_NUMBER - 1; i >= 1; i--) {
        cout << " x " << i;
    };

    // Tests final console output
    cout << " = " << computeProd(5) << endl;

    return 0;

};
