#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	int n;
	string task;
	cout<<"Enter the Number of Tasks: ";
	cin>>n;
	
	for(int i = 0; i<n; i++){
	cout<<"Enter the task: ";
	cin>>task;
	
	ofstream todo;
	
	todo.open("TO_DO_LIST.txt", ios::app);
	
	todo<<task<<endl;
	
	todo.close();
	
	cout<<"Item Added."<<endl;
}

	
	
}
