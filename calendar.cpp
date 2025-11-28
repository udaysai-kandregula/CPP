//program to find number of days in a given month of a given year
//INPUT :					OUTPUT:
//	month = 2				29
//	year = 2000

#include<iostream>
using namespace std;
int main(){
	int month,year;	
	cout<<"Enter Month : ";
	cin>>month;
	cout<<"\nEnter Year : ";
	cin>>year;
	if(month % 2 == 0 && year% 400 ==0 || (year% 100 != 0 && year % 4 == 0)){
		cout<<"29 Days";
	}
	else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month==10||month == 12 ){
		cout<<"31 Days";
	}
	else{
		cout<<"30 Days";
	}
	return 0;
}
//
//leap year days = 366;
//feb = 29 days;
//leap year logic 
//finding year is an leap are not 
//case 1 :
//	non century year, year % 4 == 0 "Then leap year"
//	example = 2024 % 4 = 0 => 4*56 = 2024 
//case 2 :
//	century year, year % 400 == 0 "Then leap year"
//	example = 2000 % 400 = 0 => 400*5 = 2000
//case 3:
//	century but not divide by 100 ,year % 100 != 0 "Then non Leap year"
//	example = 1900 % 100 != 0 => 19   


