//Find the Quadrats in which coordinates lie
//input : x = 10
//		y = 1
//output: 1st 

#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"\nEnter the x values : ";
	cin>>x;
	cout<<endl<<"Enter the y value : ";
	cin>>y;
	if(x>0 && y>0)
		cout<<endl<<"1st";
	else if(x<0 && y>0)
		cout<<endl<<"2nd";
	else if(x<0 && y<0)
		cout<<endl<<"3rd";
	else if(x>0 && y<0)
		cout<<endl<<"4th";
	else
		cout<<endl<<"points are (0,0)";
	return 0;
}



//
//				|
//				|
//		(-,+)	|   (+,+)
//		--------|---------
//				|
//		(-,-)	|	(+,-)
//				|
