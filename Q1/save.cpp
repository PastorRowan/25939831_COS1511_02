
# include <string>

/**
 * Check function header
 * @param nInt - Stands for number integer
 * @pre - N/A - The function was not defined in the assignment
 * @post - N/A - The function was not defined in the assignment (I don't know if function mutates state outside of the body or what I/O operations
 * it performs
 */
void check(int nInt, float nFloat);

/**
 * Multiplies 2 floats and returns the product
 * @param n1 - The first float
 * @param n2 - The Second float
 * @pre - Actual parameters n1 and n2 were defined and initialised before funciton call (They were assigned float values)
 * @return - The product of n1 times n2
 */
float mult(float n1, float n2) {
    return n1 * n2;
};

/**
 * Time a recursive function (The prompt did not define a base case or what the function should do so I am just doing what the prompt says)
 * @param s - Seconds
 * @param m - Minutes
 * @param h - Hours
 * @pre - Actual parameters s, m and h are defined and initialised before funciton call (They were assigned int values)
 * @return - The product of n1 times n2
 */
int time(int s, int m, int h) {
    return time(s, m, h);
};

/**
 * Time a recursive function (The prompt did not define a base case or what the function should do so I am just doing what the prompt says)
 * @param s - String parameter to be searched
 * @param c - Search key char
 * @pre - Actual parameters s and c are defined before function call
 * @return - int count of occurence of search key char
 */
int countChar(std::string s, char c) {

    // Initialise count variable
    int
        count = 0
    ;

    // Iterates over each character in a string
    // If the character is the search character then count in incremented to reflect this
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count++;
        };
    };

    return count;

};
