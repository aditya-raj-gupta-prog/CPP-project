#include<iostream>
#include<string>

using namespace std;

int main(){
	string original;
	
	cout<<"Enter the String:";
	getline(cin, original);
	
	string final = original;
	
	if( original.length() > 10){
		final = final.substr(0, 10);
		cout<<"The original string was too long "<<original.length()<<" Characters"<<endl;
		cout<<"The Truncated string is "<<final<<endl;
	}
	else{
		cout<<"The string is Saved."<<endl;
	}
	
	cout<<"The Final String is "<<final<<endl;
	cout<<"String Length: "<<final.length()<<"/10 characters"<<endl;
}

