//LCM of two numbers

#include<iostream>
using namespace std;

int main(){
    int n1,n2,rem ,gcd,lcm;
    
    cin>>n1>>n2;
	int a = n1,b=n2;
    while(b != 0){
        rem = a%b;
        a=b;
        b=rem;
    }
    gcd = a ;
	lcm = (n1*n2)/gcd;
	cout<<lcm;
    return 0;
}