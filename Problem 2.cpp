#include<iostream>
#include<string>

using namespace std;

int main(){
	
	string input;
	
	cout<<"Enter a string: ";
	getline(cin, input);
	
	int n = input.size();
	string reversed;
	// It starts reading from the end
	for(int i = n-1; i>=0; i--){
		reversed += input[i]; 	
	}
	
	cout<<"The Reversed String is: "<<reversed<<endl;
	
	
}
