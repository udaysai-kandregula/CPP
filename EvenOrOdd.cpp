//program to identify if the given number is even or odd
//input :10 
//output : even

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number : ";
	cin>>num;
	cout<< (num % 2==0?"Even":"Odd"); //ternary operater
	return 0;
	
}

