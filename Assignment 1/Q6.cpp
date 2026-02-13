/*Write a program that takes an integer as input and checks whether the number is strictly greater than 100.


Input Format*/

#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    if(a>100){
        cout<<"Greater";
    }
    else{
        cout<<"Not Greater";
    }
    return 0;
}