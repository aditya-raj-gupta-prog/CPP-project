#include<iostream>

using namespace std;

void printLargeString(const string &str);

int main(){
	string largeString;
	
	cout<<"Enter a String: ";
	getline(cin, largeString);
	
	printLargeString(largeString);
	
	return 0;
}

void printLargeString(const string &str){
	cout<<"String: "<<str<<endl;
	cout<<"Length: "<<str.length()<<" characters"<<endl;
}
