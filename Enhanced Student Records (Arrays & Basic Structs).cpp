#include<iostream>
#include<string>
using namespace std;

struct Student{
	string name;
	int rollNumber;
	double marks[5];
	double average;
};

int main(){
	Student student[3];
	int subjects = 5;
	int n = 3;
	
	cout<<"Enter Student Details: "<<endl;
	
	for(int i = 0; i<3; i++){
		cout<<"Enter the Name of Student #"<<i+1<<": ";
		getline(cin, student[i].name);
		cout<<"Enter the Roll Number: ";
		cin>>student[i].rollNumber;
		cin.ignore();
		for(int j = 0; j<5; j++){
			cout<<"Enter Marks in Subject#"<<j+1<<": ";
			cin>>student[i].marks[j];
			}
			cin.ignore();
			}
			
	for(int i = 0; i<3; i++){
		double sum = 0;
		for(int j = 0; j<5; j++){
			sum = sum + student[i].marks[j];
		}
		
		double avg = sum / 5;
		
		cout<<"Average for "<<student[i].name<<": "<<avg<<endl;

	}		
	
	}
