//The program to find sum of numbers in a given range
//input:				output: 
//	3 6					18
//	
#include<iostream>
using namespace std;
int main(){
	int low,high,i,sum = 0;			//variables 
	cout<<"enter your range:  ";
	cin>>low >>high;    			//taking inputs
	for(i = low ; i <= high ; i++)
		sum +=i;					//sum = sum + i it will update our sum variable in every time 
	cout<<sum;
	return 0;
}


//the inputs 3,6
//so we starts with 3 and go upto 6 we lknow the no.of ittaration so we use for loop 
//3+4+5+6 = 18

