#include<iostream>
#include<string>

using namespace std;

int main(){
	string input;
	
	cout<<"Enter a String: ";
	getline(cin, input);
	
	 int n = input.size();
	
	if(n>0){
		input[0] = toupper(input[0]);
	}
	
	for(int i = 1; i<n; i++){
		if (input[i-1] == ' '){
		input[i] = toupper(input[i]); 
		}	 
		}
		
		cout<<"Title Case: "<<input<<endl;
}
