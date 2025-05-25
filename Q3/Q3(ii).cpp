
#include <iostream>

/**
 * Calculates the sum and difference between 2 integes and assigns the corresponding values to reference parameters
 * @param n1 - First integer
 * @param n2 - Second integer
 * @param sum [in,out] Reference to the sum to be updated.
 * @param diff [in,out] Reference to the diff to be updated.
*/
void calcSumAndDiff(const int n1, const int n2, int& sum, int& diff) {
    sum = n1 + n2;
    if (n1 <= n2) {
        diff = n1 - n2;
    } else {
        diff = n2 - n1;
    };
};

// Test solution
int main() {

    using namespace std;

    // Defining test variables
    const int
        TEST_NUMBER_1 = 1,
        TEST_NUMBER_2 = 2
    ;

    int
        sum = 0,
        difference = 0
    ;

    // Calling calcSumAndDiff for testing purposes
    calcSumAndDiff(TEST_NUMBER_1, TEST_NUMBER_2, sum, difference);

    // Format console
    cout
        << endl
        << "Q3 (ii) output:" << endl
        << endl
    ;

    // Sum test output
    cout
        << "sum = " << TEST_NUMBER_1 << " + " << TEST_NUMBER_2 << " = " << sum << endl
        << endl
    ;

    // Difference test output
    if (TEST_NUMBER_1 >= TEST_NUMBER_2) {
        cout << "difference = " << TEST_NUMBER_2 << " - " << TEST_NUMBER_1 << " = " << difference << endl;
    } else {
        cout << "difference = " << TEST_NUMBER_1 << " - " << TEST_NUMBER_2 << " = " << difference << endl;
    };

    return 0;

};
