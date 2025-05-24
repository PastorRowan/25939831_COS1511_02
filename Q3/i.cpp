
#include <iostream>

/**
 * Check function header
 * @param n - Stands for number integer
 * @pre - Actual parameters nInt and nFloat are defined and initialised before funciton call (They were assigned appropriate values)
 * @post - N/A - The function was not defined in the assignment (I don't know if function mutates state outside of the body or what I/O operations
 * it performs
 */
int intCube(int n) {
    return n * n * n;
};

// Test solution
int main() {

    using namespace std;

    const int TEST_NUMBER = 2;

    // Output solution
    cout
        << endl
        << TEST_NUMBER << "^3 = " << TEST_NUMBER << " x " << TEST_NUMBER << " x " << TEST_NUMBER << " = " << intCube(2)
        << endl
    ;

    return 0;

};
