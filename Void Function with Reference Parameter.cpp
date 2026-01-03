#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void upperPaglu(string &s);

int main(){
	string name;
	
	cout<<"Enter a String: ";
	getline(cin, name);
	
	upperPaglu(name);
	
	cout<<"The Final Result: "<<name<<endl;
}

void upperPaglu(string &s){
	
	int n = s.length(); 
	for (int i = 0; i<n; i++){
		s[i] = toupper(s[i]);
	}
}
