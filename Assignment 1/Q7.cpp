#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    if(year%4 == 0 && year%100 != 0) || (year%400 == 0){
        cout<<"Leap Year";
} else{
    cout<<"Not a Leap Year";
}
return 0;
}
/*Write a program to determine if a given year is a leap year. A year is a leap year if:

It is divisible by 400, OR

It is divisible by 4 but not divisible by 100.*/