
/*
Error:

There are no errors.
There are some code improvements that could be implemented.
The function allows invalid parameter use during runtime.
The function has no documentation.
*/

#include <iostream>
#include <cmath>

/**
 * @brief Calculates the square of a given float number.
 * @param number The input value to be squared (must be a finite number).
 * @return The square of the input number.
 * @note Returns NaN if input is NaN or infinity.
 */
float calculateSquare(const float number) {

    using namespace std;

    // Handles run time error checking
    if (isnan(number) || isinf(number)) {
        cout << "Warning: number is nan (undefined number) or infinity, returning nan";
        return NAN;
    };

    // Calculates square
    return number * number;

};

int main() {

    using namespace std;

    // Define test variable
    const float
        TEST_NUMBER = 2.f
    ;

    // Format console
    cout
        << endl
        << "Output Q2 (vi):" << endl
        << endl
    ;
    cout.setf(ios::fixed);

    // Test console output
    cout
        << "(" << TEST_NUMBER << ")^2 = " << TEST_NUMBER << " x " << TEST_NUMBER << " = " << calculateSquare(TEST_NUMBER)
    ;

    return 0;

};
