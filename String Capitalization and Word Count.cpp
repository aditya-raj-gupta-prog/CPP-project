#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void capitalizeWordsAndCount(string &str, int &wordCount){
	bool newWord = true;
	wordCount = 0;
	
	for(int i = 0; 	i<str.length();i++){
		if(isalpha(str[i])){
			if(newWord){
				str[i] = toupper(str[i]);
				newWord = false;
				wordCount++;
			}
			else{
				str[i] = tolower(str[i]);
			}
		}
		else{
			newWord = true;
		}
	}
}

int main(){
	string input;
	int Count;
	
	cout<<"Enter a String: ";
	getline(cin, input);
	
	capitalizeWordsAndCount(input, Count);
	
	cout<<"Capitalized String: "<<input<<endl;
	cout<<"Number of Words: "<<Count<<endl;
	
	return 0;
}
