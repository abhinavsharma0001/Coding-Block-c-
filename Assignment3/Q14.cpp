//armstrong no.
/*Take the following as input.

A number (N1)
A number (N2)
Write a function which prints all armstrong numbers between N1 and N2 (inclusive).

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    for (int num = N1; num <= N2; num++) {
        int temp = num;
        int digits = 0;

       
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        if (sum == num) {
            cout << num << endl;
        }
    }

    return 0;
}
