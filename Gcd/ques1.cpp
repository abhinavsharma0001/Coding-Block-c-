//gcd of two numbers

#include<iostream>
using namespace std;

int main(){
    int a,b,rem;
    cout<<"enter two num";
    cin>>a>>b;
    while(b!=0){
        rem = a%b;
        a=b;
        b=rem;
    }
    cout<<"gcd"<<a ;
    return 0;
}