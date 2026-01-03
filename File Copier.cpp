#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	char shabd;
	
	ofstream sh;
	sh.open("Message.txt");
	
	sh<<"badmosh"<<endl; 
	
	sh.close();
	
	cout<<"The Message was Saved."<<endl;
	
	ifstream in;
	in.open("Message.txt");
	ofstream out;
	out.open("Message_Copy.txt");
	
	while(in.get(shabd)){
		out<<shabd;
	}
	
	in.close();
	out.close();
	
	cout<<"A Message Copy was Created."<<endl;
	return 0;
}
