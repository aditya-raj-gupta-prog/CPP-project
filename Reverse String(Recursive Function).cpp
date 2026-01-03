#include<iostream>
#include<string>
using namespace std;

string reverseString(string str){
	
	if(str.length()<=1){
		return str;
	}
	
	return reverseString(str.substr(1))+str[0];
}

int main(){
	string input;
	
	cout<<"Enter the word: ";
	cin>>input;
	
	cout<<"The Reversed Word is "<<reverseString(input)<<endl;
	return 0;
}
