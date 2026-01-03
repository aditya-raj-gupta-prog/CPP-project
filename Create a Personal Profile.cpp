#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string fullName;
	string enrollmentNumber;
	string branch;
	
	cout<<"Enter Name: ";
	getline(cin, fullName);
	

	
	cout<<endl<<"Enter Enrollment Number: ";
	cin>>enrollmentNumber;
	
	cout<<endl<<"Enter the Branch: ";
	cin>>branch;
	
	ofstream save;
	
	save.open("Profile.txt");
	
	save<<fullName<<endl;
	save<<enrollmentNumber<<endl;
	save<<branch<<endl;
	
	save.close();
	
	cout<<"Profile was Saved Successfully."<<endl;
	
	return 0;
	
}
