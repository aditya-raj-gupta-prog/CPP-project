#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string pass;
	
	cout<<"Enter the Password: ";
	getline(cin, pass);
	
	int n = pass.size();
	
	if(n<8){
		cout<<"The password needs to be atleast 8 characters long.";
	}
	else{
		cout<<"Password Saved.";
	}
	
}
