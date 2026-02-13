#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a%5==0){
        cout<<"Divisible";
    }else{
        cout<<"Not Divisible";
    }
    return 0;
}
/*Write a program that takes an integer as input and determines whether it is divisible by 5. A number is divisible by 5 if the remainder is 0 when divided by 5.*/