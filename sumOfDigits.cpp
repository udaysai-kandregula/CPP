//Find the sum of digit of a number
//input :			output:
//	4521			12

#include<iostream>
using namespace std;
int main(){
	int num, sum = 0;   // 0+ X = X;
	cout<<"Enter your number here : ";
	cin>>num;			//reading input 
	while(num>0){
		sum = sum + num % 10;
		num = num /10;
	}
	cout<<sum;
	return 0       
	;
}
