//Program to find fibonacci series up to n  
//input :5 
//output : 0,1,1,2,3

#include<iostream>
using namespace std;
int main(){
	int fn=0,sn=1;
	int n;
	cout<<"Enter your number : ";
	cin>>n;
	cout<<endl<<fn<<sn;
	for(int i = 0 ; i<n-2; i++){
		int c = fn+sn;
		fn = sn;
		sn = c;
		cout<<c;
	}
	return 0;
}


//fibonacci series means that a series of numbers which can form by adding previous two numbers 
//in the above example the numbers are start from 0,1 
//first term 	= 0
//second term 	= 1
//third term 	= 2nd + 1st => 1+0 	=> 1
//fourth term 	= 3rd + 2nd => 1+1 	=> 2
//fifth term 	= 4th + 3dr	=> 2+1	=> 3

