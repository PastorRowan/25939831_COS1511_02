
#include <iostream>

/**
 * Cubes an integer
 * @param n - Integer number to be cubed
 * @pre - Actual parameter n is defined and assigned a value before function call
 * @return the cube of the integer n
 */
int intCube(int n) {
    return n * n * n;
};

// Test solution
int main() {

    using namespace std;

    // Define test variables
    const int
        TEST_NUMBER = 2
    ;

    // Format console
    cout
        << endl
        << "Q3 (i) output:" << endl
        << endl
    ;

    // Output solution
    cout
        << TEST_NUMBER << "^3 = " << TEST_NUMBER << " x " << TEST_NUMBER << " x " << TEST_NUMBER << " = " << intCube(TEST_NUMBER)
        << endl
    ;

    return 0;

};
