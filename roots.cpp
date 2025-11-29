//The program to find root of a quadratic equation
//input:			output:
//	x = 1			root1 = 3
//	y = -6			root2 = 3
//	c = 9			roots are equal
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,c,det,root1,root2;
	cout<<"Enter x value : ";
	cin>>x;
	cout<<"\nEnter y value : ";
	cin>>y;
	cout<<"\nEnter constant value : ";
	cin>>c;
	det = y*y-(4*x*c); 			//b^2-4ac
	root1= (-y+sqrt(det))/2*x;	//roots = -b+-SQRT(b^2-4ac)/2a
	root2= (-y-sqrt(det))/2*x;
	cout<<"\nRoot1 = "<<root1<<"\nRoot2 = "<<root2;
	if(det > 0)
		cout<<"\nroots are real";
	else if(det < 0)
		cout<<"\nroots are not real";
	else
		cout<<"\nroots are equal";
	return 0;
}

//output

//Enter x value : 1
//
//Enter y value : -6
//
//Enter constant value : 9
//
//Root1 = 3
//Root2 = 3
//roots are equal
//--------------------------------
//Process exited after 8.388 seconds with return value 0
//Press any key to continue . . .
