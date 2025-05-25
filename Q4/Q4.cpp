
#include <iostream>
#include <string>
#include <cctype>

// Brings std::string into the global namespace
using std::string;

/**
 * @brief Collects address information from user input and stores it in provided references.
 * 
 * This function prompts the user to enter their name/title, address lines, and postal code.
 * Each input is stored in the corresponding reference parameter. The function uses
 * getline() to allow for spaces in the input fields.
 * 
 * @param[out] n     Reference to store the name/title input
 * @param[out] adr1  Reference to store the first address line input
 * @param[out] adr2  Reference to store the second address line input (can be empty)
 * @param[out] pC    Reference to store the postal code input
 * 
 * @note Input is collected using getline(), so entries can contain spaces.
 * @note The function performs no validation on the input format.
 * 
 * @post All reference parameters will contain the user's input values.
 * @post The input buffer will be empty after each getline() call.
 */
void inputData(string& n, string& adr1, string& adr2, string& pC) {

    using namespace std;

    // Prompts user to enter title
    cout << "Enter title: ";
    getline(cin, n);

    // Prompts user to enter address 1
    cout << "Enter address 1: ";
    getline(cin, adr1);

    // Prompts user to enter address 2
    cout << "Enter address 2: ";
    getline(cin, adr2);

    // Prompts user to enter address 1
    cout << "Enter postal code: ";
    getline(cin, pC);

};

/**
 * @brief Displays address data to console
 * @param n - name string, used in output
 * @param a1 - address 1, used in output
 * @param a2 - address 2, used in output
 * @param pC - postal code, used in output
 * @post Displays address data to console
 */
void displayData(const string n, const string a1, const string a2, const string pC) {

    using namespace std;

    cout
        << n << endl
        << a1 << endl
        << a2 << endl
        << pC << endl
    ;

};

// Test solution
int main() {

    using namespace std;

    // Define variables
    string
        name = "",
        addr1 = "",
        addr2 = "",
        postalCode = ""
    ;

    // Format console
    cout
        << endl
        << "Q4 output:" << endl
        << endl
    ;

    // Prompts user to enter address data
    inputData(name, addr1, addr2, postalCode);

    // Outputs data to console
    displayData(name, addr1, addr2, postalCode);

    return 0;

};
