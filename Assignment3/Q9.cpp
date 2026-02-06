//Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N <= 1) {
        cout << "Not Prime";
        return 0;
    }

    bool isPrime = true;

    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
