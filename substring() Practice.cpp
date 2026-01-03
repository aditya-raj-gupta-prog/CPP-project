#include<iostream>
#include<string>

using namespace std;

int main(){
	
	int n;
	string input;
	
	cout<<"Enter the String: ";
	getline(cin, input);
	
	n = input.size();
	
	string final = input;
	
	if(n > 3){
		
		final = final.substr(0, 3);
		cout<<"The string was too long "<<n<<" characters"<<endl;
	}
	else{
		cout<<"The String is Saved"<<endl;
	}
	
	cout<<"The final string is: "<<final<<endl;
}
