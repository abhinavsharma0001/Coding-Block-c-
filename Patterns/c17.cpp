#include<iostream>
using namespace std;

int main(){
    int n = 7;
    for(int i = 1 ; i <= n , i++){
        for(int j = 1 ; j<= n ; j++){
            cout << "*" ;
        }
        for(int j = 1 ; j<= 2 * i - 1 ; j++){
            cout << " " ;
        }
        for(int j = 1 , j <= n , j++){
            cout << "*" ;
        }
    }
    for(int i = n-1 ; i >= 1 , i--){
        for (int j = 1 , j <= n , j++ ){
              cout << "*";
        }
        for(int j = 1 ; j <= 2 *(n-i)-2i+1 ; j++){
            cout << " " ;
        }
        for(int j = 1 , j <= n , j++){
            cout << "*";
        }
        
    }  
    cout << endl ;  
    }
