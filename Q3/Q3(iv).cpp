
#include <iostream>

/**
 * Calculates the price of a pizza
 * @param pizzaSize - Char S, M or L indicating the correpsonding pizza size
 * @param numToppings - integer (can only be postive or 0) indicating the number of pizza topping selections on the pizza
 * @return 
 * @note pizzaSize should be a char enum type to limit the possible options of what can be entered but the exercise indicated to use
 * a char so I am doing only what I am told
 */
float computePrice(const char pizzaSize, const int numToppings = 0) {

    if (numToppings < 0) {
        std::cout << "Warning: numToppings is negative, returning 0.f" << std::endl;
        return 0.f;
    };

    float
        price = 0.f
    ;

    // Calculates price of pizza based on pizzaSize and numToppings
    switch (pizzaSize) {
        case 'S':
            price = 50.f + (5.50f * numToppings);
            break;
        case 'M':
            price = 70.f + (6.50f * numToppings);
            break;
        case 'L':
            price = 90.f + (7.50f * numToppings);
            break;
        default:
            std::cout << "Warning: pizza size is invalid returning 0";
            return 0.f;
    };

    return price;

};

// Test solution
int main() {

    using namespace std;

    // Format console
    cout
        << endl
        << "Q3 (iv) output:" << endl
        << endl
    ;

    // Format console output
    cout.precision(2);
    cout.setf(ios::fixed);

    // Output solution to console
    cout
        << "Price for 'S' pizza with 1 toppings - R" << computePrice('S', 1) << endl
        << "Price for 'M' pizza with 2 toppings - R" << computePrice('M', 2) << endl
        << "Price for 'L' pizza with 3 toppings - R" << computePrice('L', 3) << endl
        << "Price for 'M' pizza with 0 toppings, uses default numToppings - R" << computePrice('L') << endl
    ;

    return 0;

};
