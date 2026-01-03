#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;

int main(){
	char c, Upperc;
	int charCount = 0;
	int space = 0;
	int vowel  = 0;
	ifstream in;
	in.open("Message.txt");
	
	while(in.get(c)){
		cout<<c;
	charCount++;	
	Upperc = toupper(c);
	if(Upperc  == 'A' || Upperc == 'E' || Upperc == 'I' || Upperc == 'O' || Upperc == 'U'){
		vowel++;
	}
	if(c == ' '){
		space++;
	}

}
in.close();
	cout<<"The Number of Vowels: "<<vowel<<endl;
	cout<<"The Number of Spaces: "<<space<<endl;
	cout<<"The Number of Characters: "<<charCount - 1<<endl;

}
