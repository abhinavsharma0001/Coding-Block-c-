#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {

            if (i == 1 || i == N) {
                cout << "* ";
            }
            else if (i == 2 || i == N - 1) {
                if (j == 1 || j == 2 || j == N - 1 || j == N)
                    cout << "* ";
                else
                    cout << "  ";
            }
            else {
                if (j == 1 || j == N)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}
