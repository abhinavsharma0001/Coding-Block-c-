//Sum of odd placed and even placed digits


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int oddSum = 0, evenSum = 0;
    int pos = 1;

    while (N > 0) {
        int digit = N % 10;

        if (pos % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        N /= 10;
        pos++;
    }

    cout  << oddSum << endl;
    cout << evenSum << endl;

    return 0;
}
