#include<iostream>

using namespace std;

bool isEven(int number);

int main(){
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	
	if (isEven(num)) {
		cout<<num<<" is even"<<endl;
	}
	else{
		cout<<num<<" is odd"<<endl;
	}
	
	return 0;
	
}

bool isEven(int number){
	 if(number%2 == 0){
	 	return true;
	 }
	 else{
	 	return false;
	 }
}
