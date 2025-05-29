
#include <iostream>
#include <string>

/**
 * Prompts user to input height, width and length of the room
 * @param theHeight - integer passed via reference representing the height of the room
 * @param theWidth - integer passed via reference representing the width of the room
 * @param theLength - integer passed via reference representing the length of the room
 * @post theHeight, theWidth and theLength are assigned values based on their corresponding input
 */
void getData(int& theHeight, int& theWidth, int& theLength) {

    using namespace std;

    // Validate height (must be >= 0)
    do {
        cout << "Enter the height of the room (non-negative): ";
        cin >> theHeight;
        if (theHeight < 0) {
            cout << "Error: Height cannot be negative. Try again." << endl;
        };
    } while (theHeight < 0);

    // Validate width (must be >= 0)
    do {
        cout << "Enter the width of the room (non-negative): ";
        cin >> theWidth;
        if (theWidth < 0) {
            cout << "Error: Width cannot be negative. Try again." << endl;
        };
    } while (theWidth < 0);

    // Validate length (must be >= 0)
    do {
        cout << "Enter the length of the room (non-negative): ";
        cin >> theLength;
        if (theLength < 0) {
            cout << "Error: Length cannot be negative. Try again." << endl;
        };
    } while (theLength < 0);

};

/**
 * Calculates the volume of a room
 * @param h - integer representing the height of the room
 * @param w - integer representing the width of the room
 * @param l - integer representing the length of the room
 * @return - the volume of the room
 */
int calculateVolume(const int h, const int w, const int l) {
    // Formula for volume
    return h * w * l;
};

/**
 * Outputs the height, width, length and volume of the room are output to the console in an organised format
 * @param h - integer representing the height of the room
 * @param w - integer representing the width of the room
 * @param l - integer representing the length of the room
 * @param v - integer representing the length of the room
 * @post - height, width, length and volume of the room are output to the console in an organised format
 */
void displayOutput(const int h, const int w, const int l, const int v) {

    using namespace std;

    string
        size = ""
    ;

    // Determines size based on the volume
    if (v < 100) {
        size = "Small";
    } else if (v < 500) {
        size = "Medium";
    } else {
        size = "Large";
    };

    // Outputs text to the console
    cout
        << "The volume of a room with height " << h << ", width " << w << " and length " << l << endl
        << "is " << v << ". Size: " << size << endl
    ;

};

// Test solution
int main() {

    using namespace std;

    int
        height = 0,
        width = 0,
        length = 0,
        volume = 0
    ;

    // Runs the main program loop 5 times
    for (int i = 0; i < 5; i++) {

        cout << endl;

        // Prompts user to input data
        getData(height, width, length);

        // Calculates volume and stores it
        volume = calculateVolume(height, width, length);

        // Outputs data to console
        displayOutput(height, width, length, volume);

    };

    // Format console
    cout
        << endl
        << "program finished" << endl
    ;

    return 0;

};
