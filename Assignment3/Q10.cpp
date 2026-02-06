/*Take the following as input.

A number (N1)
A number (N2)
Write a function which returns the GCD of N1 and N2. Print the value returned.*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    cout << gcd(N1, N2);
    return 0;
}
