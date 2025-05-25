
#include <iostream>
#include <iomanip>

/**
 * Prompts user to input score between 0 and 100 and reprompts user if input is invalid
 * @return - integer score
 */
int getScore() {

    using namespace std;

    int s = 0;

    // Prompts user to input score between 0 and 100 and reprompts user if input is invalid
    do {
        cout << "Enter test score between 0 and 100: ";
        cin >> s;
    } while (s < 0 && s > 100);

    return s;

};

/**
 * @param arr - An array of integers
 * @param n - The number of elements that will be iterated over from index 0 to index n - 1
 * @pre - The arr is defined and assigned values for all 0 to n - 1 elements
 * @return - The lowest value integer found
 */
int findLowest(int arr[], int n) {

    // Initialise min to first element of array because you can't have an array with less then 1 elements
    int
        min = arr[0]
    ;

    // Iterates over n elements from index 0 to index n - 1 and assigns the minimum value found to min
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        };
    };

    return min;

};

/**
 * @param arr - An array of integers
 * @param n - The number of elements that will be iterated over from index 0 to index n - 1
 * @return - Average float value of elements from index 0 to index n - 1
 */
float calcAverage(int arr[], int n) {

    // Runtime error checking
    if (n <= 1) {
        std::cout
            << "Warning: n is less than or equal to 1, the function can only run with n >= 2 otherwise division "
            << "by 0 or a negative number will take place making the program crash or the result irrelevant, returning 0.f"
        ;
        return 0.f;
    };

    int
        total = 0
    ;

    // Add up all integers in arr
    for (int i = 0; i < n; i++) {
        total += arr[i];
    };

    // Subtract the lowest integer from the total
    total -= findLowest(arr, n);

    // Perform implicit float division of the new total and the new total number of scores to calculate the average
    return float(total) / (n - 1);

};

/**
 * \param[in] float avg - the average
 * @pre - The actual parameter avg is defined and assigned a value
 * @post - The class avg is output to the console
 */
void displayOutput(float avg) {

    using namespace std;

    // Outputs result to console
    cout
        << "After dropping the lowest test score, the test average is " << setprecision(2) << fixed << avg << endl;
    ;

};

// Test solution
int main() {

    using namespace std;

    const int
        NUMBER_SCORES = 5
    ;

    // Sets all scores to 0 implicity
    int
        scores[NUMBER_SCORES] = {}
    ;

    float
        average = 0.f
    ;

    // Format console
    cout
        << endl
        << "Q5 output:" << endl
        << endl
    ;

    // Prompts user to enter scores
    for (int i = 0; i < NUMBER_SCORES; i++) {
        cout << "Score " << i + 1 << ":";
        scores[i] = getScore();
    };

    // Format console
    cout << endl;

    // Calculates the average and assigns the value to average
    average = calcAverage(scores, NUMBER_SCORES);

    // Outputs class average to console
    displayOutput(average);

    return 0;

};
