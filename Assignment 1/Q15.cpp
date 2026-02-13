//Write a program to calculate the bonus amount for an employee based on their years of experience. If the employee has 5 or more years of experience, they receive a bonus of 10% of their salary. Otherwise, they receive no bonus (0).

#include<iostream>
using namespace std;

int main(){
    int salary ;
    int years;
    cin>>salary>>years;
    int bonus;
    bonus= salary/10;
    if(years>=5){
        cout<<bonus;
    }else{
    cout<<0;}
    return 0;
}