#include<iostream>
#include<string>

using namespace std;

int main(){
	string input;
	int n;
	 
	 cout<<"Enter the String: ";
	 getline(cin, input);
	 
	 n = input.size();
	
	 for (int i = 0; i <= n; i++){
	 	input[i] = toupper(input[i]);
	 }
	 cout<<"The Uppercase String is: "<<input<<endl;
	 
}
