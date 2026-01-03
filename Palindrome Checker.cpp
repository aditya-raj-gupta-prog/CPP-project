#include<iostream>
#include<string>

using namespace std;

int main(){
	string input;
	
	cout<<"Enter a string: ";
	getline(cin, input);
	
	int n = input.size();
	bool isPalindrome = true;
	
	for(int i = 0; i<n/2; i++){
		if(input[i] != input[n-1-i]){
			isPalindrome = false;
			break;
		}
	}
	
	if(isPalindrome){
		cout<<"This is a Palindrome."<<endl;
	}
	else{
		cout<<"This is not a Palindrome."<<endl;
	}
	
	
}
