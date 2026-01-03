#include<iostream>
#include<string>

using namespace std;

void greet(string name);

int main(){
	string userName, greeting;
	
	cout<<"What is your Name?: ";
	getline(cin, userName);
	
	greet(userName);
	
	return 0;
}

void greet(string name){
	cout<<"Hello, "<<name<<"!"<<endl;
	cout<<"Welcome to the Program!"<<endl;
}
