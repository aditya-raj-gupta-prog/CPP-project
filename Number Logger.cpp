#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream num;
	num.open("Number.txt");
	for(int i = 0; i<50; i++){
	num<<i+1<<endl;
}
num.close();

cout<<"The File was Saved."<<endl;
return 0;
}
