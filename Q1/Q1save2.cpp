

/*
The question specifically indicated only to create the function headers so I did so without the corresponding definitions
*/
# include <string>

/**
 * Check function header
 * @param n1 - integer number
 * @param n2 - float number
 * @pre - Actual parameters n1 and n2 are defined and assigned values before function call (not undefined)
 * @post - N/A - The function was not defined in the assignment (I don't know if function mutates state outside of the body or what I/O operations
 * it performs
 */
void check(int n1, float n2);

/**
 * Multiplies 2 floats and returns the product
 * @param n1 - The first float
 * @param n2 - The Second float
 * @pre - Actual parameters n1 and n2 are defined and assigned values before function call (not undefined)
 * @return - The product of n1 times n2
 */
float mult(float n1, float n2);

/**
 * @brief Time a recursive function
 * @param s - Seconds
 * @param m - Minutes
 * @param h - Hours
 * @pre - Actual parameters s, m and h are defined and initialised before funciton call (They were assigned int values)
 * @return - The description is unclear about return type. I am assuming it returns a string represention
 */
std::string time(int s, int m, int h);

/**
 * Time a recursive function (The prompt did not define a base case or what the function should do so I am just doing what the prompt says)
 * @param s - String parameter to be searched
 * @param c - Search key char
 * @pre - Actual parameters s and c are defined before function call
 * @return - int count of occurence of search key char
 */
int countChar(std::string s, char c);
