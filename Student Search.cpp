#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string searchEnroll;
	int ent;
	string name, enroll, phone, branch;
	cout<<"How many Entries do You want to Make? : ";
	cin>>ent;
	cin.ignore();
	
	for(int i = 0; i<ent; i++){
	cout<<"Enter Name: ";
	getline(cin, name);
	
	cout<<"Enter the Enrollment Number: ";
	cin>>enroll;
	
	cout<<"Enter the Phone Number: ";
	cin>>phone;
	
	cout<<"Enter the Branch: ";
	cin.ignore();
	getline(cin, branch);

	ofstream out;
	
	out.open("myFriends.txt", ios::app);
		
	out<<name<<endl;
	out<<enroll<<endl;
	out<<phone<<endl;
	out<<branch<<endl;

	out.close();
	
	cin.ignore();
}
	bool found = false; 
	
	cout<<"Enter Enrollment Number to Search For: ";
	cin>>searchEnroll;
	ifstream in;
	
	
	in.open("myFriends.txt");
	if(!in.is_open()){
		cout<<"Could not Open the File."<<endl;
		return 1;
	}
	
	while(in >> name >> enroll >> phone >> branch){
		if(enroll == searchEnroll){
			cout<<endl<<"Student Found!"<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Enrollment Number: "<<enroll<<endl;
			cout<<"Phone Number: "<<phone<<endl;
			cout<<"Branch: "<<branch<<endl;
			
			found = true;
			break;
		}
	}
	in.close();
	
	if(!found){
		cout<<"Student not Found."<<endl;
	}
	
	return 0;
}
