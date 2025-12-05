//Program to reverse a given number
//input:				output:
//	675 				576

#include<iostream>
using namespace std;
int main (){
	int num,rev,rem;
	cout<<"Enter a number : ";
	cin>>num;
	while(num > 0){
		rem = num % 10;
		rev = rev*10 + rem;
		num = num / 10;
	}
	cout<<rev;
	
	return 0;
}


