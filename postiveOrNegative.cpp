//program to identify the given number is positive or negative
//input :
//	a = 10
//output:
//	positive

#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter your number : ";
	cin>>num;
	if(num>=0){
		cout<<endl<<"Positive";
	}
	else{
		cout<<endl<<"Negative";
	}
	return 0;
}
