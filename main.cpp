
#include <iostream>
#include <string>

/**
 * Prompts user to input height, width and length of the room
 * @param theHeight - unsigned integer passed via reference representing the height of the room
 * @param theWidth - unsigned integer passed via reference representing the width of the room
 * @param theLength - unsigned integer passed via reference representing the length of the room
 * @post theHeight, theWidth and theLength are assigned values based on their corresponding prompts
 */
void getData(unsigned int& theHeight, unsigned int& theWidth, unsigned int& theLength) {

    using namespace std;

    cout << "Enter the height of the room: ";
    cin >> theHeight;

    cout << "Enter the width of the room: ";
    cin >> theWidth;

    cout << "Enter the length of the room: ";
    cin >> theLength;

};

/**
 * Calculates the volume of a room
 * @param h - unsigned integer representing the height of the room
 * @param w - unsigned integer representing the width of the room
 * @param l - unsigned integer representing the length of the room
 * @return - the volume of the room
 */
unsigned int calculateVolume(const unsigned int h, const unsigned int w, const unsigned int l) {
    // Formula for volume
    return h * w * l;
};

/**
 * Outputs the height, width, length and volume of the room are output to the console in an organised format
 * @param h - unsigned integer representing the height of the room
 * @param w - unsigned integer representing the width of the room
 * @param l - unsigned integer representing the length of the room
 * @param v - unsigned integer representing the length of the room
 * @post - height, width, length and volume of the room are output to the console in an organised format
 */
void displayOutput(const unsigned int h, const unsigned int w, const unsigned int l, const unsigned int v) {

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

    unsigned int
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
