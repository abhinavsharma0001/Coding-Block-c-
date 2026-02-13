/*Write a program to calculate the total electricity bill based on the number of units consumed. The pricing is structured as follows:

For units less than or equal to 100: ₹2 per unit.

For units greater than 100 and less than or equal to 200: ₹3 per unit.

For units greater than 200: ₹5 per unit.*/


#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;

    cin >> units;

    if (units <= 100) {
        bill = units * 2;
    }
    else if (units <= 200) {
        bill = units * 3;
    }
    else {
        bill = units * 5;
    }

    cout << bill;

    return 0;
}