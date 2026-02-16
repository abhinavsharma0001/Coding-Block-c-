#include <iostream>
using namespace std;
int main(){
    int n=5;
    for (int i = 5; i > 0; i--) {
        for (int j = 1; j <= 5; j++){
            if (j >= i) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (int a = 1; a <= i; a++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}