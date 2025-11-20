//Program to identify the character is vowel or consonant
//Example: 1		Example:2
//input : 'a'			input:'H'
//output: 'Vowel'		output:Consonant

#include<iostream>
using namespace std;
int main(){
	char ch ;
	cout<<"Enter a Character : ";
	cin>>ch;
	if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		ch== 'A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
		cout<<"\nVowel";
	}
	else{
		cout<<"\nConsonant";
	}
return 0;
}
