//Write a program to print reverse of a sting;
//input = "hello" output = "olleh"

#include<iostream>
#include<string>
using namespace std;
int main (){
	string word;
	cout<<"Enter your word here : ";
	cin>>word;
	int size = word.size(); // for getting length of string i used "str.size()"
	for(int i = size ; i >= 0 ; i--){
		cout<<word[i];
	}
}

//output:-
//Enter your word here : hello
//olleh
