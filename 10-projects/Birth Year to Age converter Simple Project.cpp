#include<iostream>
using namespace std;
int main(){

//	Simple Project:~
//	Birth Year to Age converter
	
	string yourName;
	int currentYear=2025, birthYear;
	
	cout<<"Enter your Name: ";
	getline (cin, yourName);
	cout<<"Hello"<<" "<<yourName<<"!"<<endl<<endl;
	
	cout<<"Enter your Birth Year"<<endl<<"I Will tell you your Age"<<endl<<endl<<"Enter Here: ";
	cin>>birthYear;
	
	cout<<endl<<"Your Age is: "<<currentYear - birthYear <<endl;
	
	

}
