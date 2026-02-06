#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {

        // spaces
        for (int s = 1; s <= N - i; s++) {
            cout << "  ";
        }

        // increasing numbers
        for (int num = i; num <= 2 * i - 1; num++) {
            cout << num << " ";
        }

        // decreasing numbers
        for (int num = 2 * i - 2; num >= i; num--) {
            cout << num << " ";
        }

        cout << endl;
    }
    return 0;
}
