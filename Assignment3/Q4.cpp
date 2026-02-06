//Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    int decimal = 0;
    int power = 1;

    while (N > 0) {
        int digit = N % 10;
        decimal += digit * power;
        power *= 2;
        N /= 10;
    }

    cout << decimal;
    return 0;
}
