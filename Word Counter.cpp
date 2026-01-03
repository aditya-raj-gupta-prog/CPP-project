#include<iostream>
#include<string>

using namespace std;

int main(){
	string input;
	int wordCount;
	
	cout<<"Enter a String: ";
	getline(cin, input);
	
	int n = input.size();
	
	for(int i=0; i < n; i++){
		if(input[i] == ' '){
		wordCount++;
		}
	}
	//To count the last Word
	if(n>0){
		wordCount++;
	}
	cout<<"The Number of Words are: "<<wordCount<<endl;
}
