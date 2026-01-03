#include<iostream>
#include<string>
#include<cmath>
using namespace std;

struct Report{
	float marks[5];
	float roll;
	string name;
	int age;
	float average;

};

void Average(Report &r){
	float sum = 0;
	for(int i = 0; i<5; i++){
		sum = sum + r.marks[i];
	}
	r.average = sum/5.0;
}
void sorter(Report r[], int n){
	for(int i = 0; i<n-1; i++){
		for(int j = 0; j<n-i-1; j++){
			if(r[j].name>r[j+1].name){
				Report temp = r[j];
				r[j] = r[j+1];
				r[j+1] = temp;
			}
		}
}
}
void display(Report r[], int n){
	for(int i = 0; i<n; i++){
		cout<<"Name: "<<r[i].name<<endl;
		cout<<"Roll Number: "<<r[i].roll<<endl;
		cout<<"Age: "<<r[i].age<<endl;
		for(int j = 0 ; j<5; j++){
			cout<<"Marks in Subject "<<j+1<<": "<<r[i].marks[j]<<endl;
					}
	}
}

int main(){
	int n;
	cout<<"Enter Number of Students: ";
	cin>>n;
	Report *r = new Report[n]; 
	for(int i = 0; i<n; i++){
		cout<<"Enter details of Student "<<i+1<<"."<<endl;
		cout<<"Enter Roll Number: ";
		cin>>r[i].roll;
		cin.ignore();
		cout<<"Enter Name: ";
		getline(cin, r[i].name);
		cout<<"Enter Age: ";
		cin>>r[i].age;
		for(int j = 0; j<5; j++){
		cout<<"Marks in Subject "<<j+1<<":";
		cin>>r[i].marks[j];
	}
	Average(r[i]);
}
sorter(r,n);


float avgS[5];
for(int k = 0; k<5; k++){
	avgS[k] = 0;
}
for(int j = 0; j<5;j++){
	for(int i = 0; i<n; i++){
		avgS[j] += (r[i].marks[j])/n;
	}
}
cout<<"Average Marks of Students: "<<endl;
for(int i = 0; i<n; i++){
	cout<<"Student "<<i+1<<": "<<r[i].average<<endl;
}
cout<<"Class Statistics: "<<endl;
for(int i = 0; i<5; i++){
	cout<<"Average Marks in Subject "<<i+1<<": "<<avgS[i]<<endl;
}

cout<<"All the Entries of Students."<<endl;
display(r,n);
float nom;
do{
cout<<"Which Student's Report Card do you wish to view?(Enter Roll Number)[Press 0 to Quit] :";
cin>>nom;
bool flag = false;
for(int i = 0; i<n; i++){
	if(r[i].roll == nom){
		flag = true;
		cout<<"Name: "<<r[i].name<<endl;
		cout<<"Roll Number: "<<r[i].roll<<endl;
		cout<<"Age: "<<r[i].age<<endl;
		for(int j = 0 ; j<5; j++){
			cout<<"Marks in Subject "<<j+1<<" :"<<r[i].marks[j]<<endl;
					}
	}}
	if(flag == false){
		cout<<"No such Student Exists(Bakchodi Mat Kar!)"<<endl;	
	}

}while(nom != 0);
}
