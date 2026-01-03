#include<iostream>
#include<string>

using namespace std;

class Utility{
	
	
	public: 
	void printData(int i){
		cout<<"Integer: "<<i<<endl;
	};
	void printData(double b){
		cout<<"Double: "<<b<<endl;
	}
	void printData(string c){
		cout<<"String: "<<c<<endl;
	}
};


int main(){
	
	Utility util;
	
	util.printData(4);
	
	util.printData(5.5);
	
	util.printData("Baigan");
}
