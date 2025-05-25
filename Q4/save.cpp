
#include <iostream>
#include <string>
#include <cctype>

// Brings std::string into the global namespace
using std::string;

/**
 * Inputs data from the console
 * @param
 */
void inputData(string& s, const string prompt = "") {
    using namespace std;
    if (prompt.size() != 0) {
        cout << prompt;
    };
    cin >> s;
};

/*
Mr R.S. Bopape
P.O. Box 50741
Sandton 2146
*/

string initials(const string s) {

    string
        init = ""
    ;

    size_t
        i = string::npos
    ;

    do {
        i = s.find_first_not_of(' ', ++i);
        init += toupper(s[i]);
        init += '.';
        i = s.find_first_of(' ', ++i);
    } while(i < s.size());

    return init;

};

string lastName(const string s) {

};

void displayData(const string n, const string a1, const string a2, const string pC, const char mOrF) {

    using namespace std;

    string title = "";

    switch (mOrF) {
        case 'm':
            title += "Mr ";
            break;
        case 'f':
            title += "Mrs ";
            break;
        default:
            cout << "Warning: mOrF parameter is not 'm' or 'f' applying default title \"Mr \"";
            title += "Mr ";
            break;
    };

    title += initials(n);

    cout
        << title << endl
        << a1 << endl
        << a2 << endl
        << pC << endl
    ;

};

int main() {

    using namespace std;

    string
        name = "",
        addr1 = "",
        addr2 = "",
        postalCode = ""
    ;

    // Prompts user to enter full name
    inputData(name, "Enter full name (first name then middle name then surname): ");

    // Prompts user to enter address 1
    inputData(addr1, "Enter address 1: ");

    // Prompts user to enter address 2
    inputData(addr2, "Enter address 2: ");

    // Prompts user to enter postal code
    inputData(postalCode, "Enter postal code: ");

    // Outputs data to console
    displayData(name, addr1, addr2, postalCode, 'm');

    return 0;

};
