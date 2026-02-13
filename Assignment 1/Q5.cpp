//Write a program that takes an integer as input and checks whether the number is zero or non-zero.
#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;  

    if (num != 0)
        cout << "Non-Zero";
    else
        cout << "Zero";

    return 0;
}