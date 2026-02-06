/*Faculty at CodingBlocks loves to purchase smartphones and decides to play a game. 
Aayush and Harshit decides to shop for smartphones. Aayush purchases 1 smartphone, then Harshit purchases 2 smartphones,
 then Aayush purchases 3 smartphones, then Harshit purchases 4 smartphones, and so on. Once someone can't purchase more 
 smartphones, he loses.

Aayush can purchase at most M smartphones and Harshit can purchase at most N smartphones.
 Who will win ? Print "Aayush" and "Harshit" accordingly.


Input Format
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. Two integers M and N denoting the maximum possible number of smartphones 
Aayush and Harshit can purchase respectively.*/
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int M, N;
        cin >> M >> N;

        int turn = 1;

        while (true) {
            // Aayush's turn (odd)
            if (turn % 2 == 1) {
                if (M >= turn) {
                    M -= turn;
                } else {
                    cout << "Harshit" << endl;
                    break;
                }
            }
            // Harshit's turn (even)
            else {
                if (N >= turn) {
                    N -= turn;
                } else {
                    cout << "Aayush" << endl;
                    break;
                }
            }
            turn++;
        }
    }
    return 0;
}
