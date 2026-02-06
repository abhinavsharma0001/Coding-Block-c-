/*Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the
 number. Print the value returned/**/

 #include <iostream>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int count = 0;
    do {
        int digit = n % 10;
        if (digit == d)
            count++;
        n /= 10;
    } while (n > 0);

    cout << count;
    return 0;
}