//program to calculate max noof handshakes in a room and one person is not give handshake to same person again
 #include<iostream>
 using namespace std;
 int main(){
 	int n;
 	int handshakes;
 	cout<<"Enter the no.of persons in a room : ";
 	cin>>n;
 	handshakes = n*(n-1)/2;
 	cout<<handshakes;
 	return 0;
 }
 
//because i used a normal sum of number formula in some modifacations
//TOTAL = N(N-1)/2 = 5(5-1)/2 = 5(4)/2 = 20/2 = 10;

//n = 5 
//1st person can give 4 handshakes (2,3,4,5)
//2nd person can give 3 handshakes cause 2nd and 1st person are already met (3,4,5)
//3rd person can give 2 handshakes cause 3nd person is alreay met 1st and 2nd (4,5)
//4th person can give only 1 handshake cause 4th person alreay met with other except 5th person (5)
//TOTAL NO.OF HANDSHAKES IS 10 						  
