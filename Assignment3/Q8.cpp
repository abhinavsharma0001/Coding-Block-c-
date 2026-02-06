/* Take the following as input.

Minimum Fahrenheit value
Maximum Fahrenheit value
Step

Print as output the Celsius conversions. Use the formula C = (5/9)(F – 32) E.g. for an input of 0, 100 and 20 the output is
0 -17
20 -6
40 4
60 15
80 26*/

#include <iostream>
using namespace std;

int main() {
    int minF, maxF, step;
    cin >> minF >> maxF >> step;

    for (int F = minF; F <= maxF; F += step) {
        int C = (5 * (F - 32)) / 9;
        cout << F << " " << C << endl;
    }

    return 0;
}
