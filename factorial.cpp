//The program to find factorial of a number 
//input : 4 
//output : 24

#include<iostream>
using namespace std;
int main(){
	int num,fact = 1;
	cout<<"Enter a number : ";
	cin>>num;
	for(int i = 1 ; i <= num ; i++)
		fact*=i;
	cout<<"fact  "<<fact;
	return 0;
}



//how to find a factorial of a number :
//	The given is 4 then 3*2*1 = 4!

