#include<iostream>
#include<string>
using namespace std;

int main(){
	string firstName, middleName, lastName;
	
	cout<<"Enter First Name: ";
	cin>>firstName;
	
	cout<<"Enter Middle Name: ";
	cin>>middleName;
	
	cout<<"Enter Last Name: ";
	cin>>lastName;
	
	string fullName = firstName + " " + middleName + " " + lastName;
	
	cout<<"The Full Name is: "<<fullName<<endl;	 
}
