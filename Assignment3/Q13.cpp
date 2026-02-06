//simple input
/*Given a list of numbers, stop processing input after
 the cumulative sum of all the input becomes negative.*/

#include<iostream>
using namespace std;
int main() {
	int a;
	int sum = 0;
	while(cin >> a){
	  sum += a;

	  if(sum<0)
	     break;

	   cout << a << endl;	 
	}
	
	return 0;
}