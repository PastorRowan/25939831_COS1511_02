
#include <iostream>
#include <string>

using std::string;

/**
 * Outputs a row to the console with parameterised filler and border.
 * Helper function
 * @param l - integer length of row.
 * @param filler - string of characters printed between the start and end of a row l times.
 * @param b - stands for border. string of characters printed at the start and end of a row.
 * @post - Outputs a row to the console with parameterised filler and border.abort
 */
void printRow(int l, const string filler = "*", const string b = "*") {

    using namespace std;

    // Runtime error handling for parameter l
    if (l <= 0) {
        cout << "Warning: l must be greater than or equal to 1, assigning l = 1" << endl;
        l = 1;
    };

    // If l is 1 then only 1 character should be output to console
    if (l == 1) {
        cout << b << endl;
        return;
    };

    // Outputs border characters at the start of row to console
    cout << b;

    // Outputs filler between start and end of row to console
    for (int i = 0; i < l - 2; i++) {
        cout << filler;
    };

    // Outputs border characters at the end of row to console
    cout << b << endl;

};

/**
 * Outputs an empty rectangle with the border made of * to the console with parameterised dimensions
 * @param l - integer length of the rectangle
 * @param h - integer height of the rectangle
 * @post - Outputs an empty rectangle with the border made of * to the console with parameterised dimensions
 */
void rectangle(int w, int h) {

    using namespace std;

    // Runtime error handling for parameter h
    if (h <= 0) {
        cout << "Warning: h must be greater than or equal to 1, assigning h = 1" << endl;
        h = 1;
    };

    // If h is 1 then only 1 row should be output to console
    if (h == 1) {
        printRow(w);
        return;
    };

    // Outputs top row to console
    printRow(w);

    // Outputs rows in between top and bottom to console
    for (int j = 0; j < h - 2; j++) {
        printRow(w, " ");
    };

    // Outputs bottom row to console
    printRow(w);

};

// Test solution
int main() {

    using namespace std;

    // Console formatting
    cout << endl;

    // Test rectangle
    rectangle(0, 1);

    return 0;

};
