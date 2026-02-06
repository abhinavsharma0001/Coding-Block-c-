/*Take the following as input.

A number
Write a function which returns true if the number is an armstrong number and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3


Input Format
Single line input containing an integer*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    int original = num;
    int digits = 0;

    // count digits
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // calculate armstrong sum
    int sum = 0;
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        cout << "true";
    else
        cout << "false";

    return 0;
}
