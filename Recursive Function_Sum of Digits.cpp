#include<iostream>

using namespace std;

int sumOfDigits(int n);

int main(){
	int input;
	cout<<"Enter a Number: ";
	cin>>input;
	
	int result = sumOfDigits(input);
	
	if(input<=0){
		cout<<"Enter a Valid Number."<<endl;
	}
	cout<<"The Sum of Digits is: "<<result<<endl;
	return 0;
}

int sumOfDigits(int n){
	
	if(n<10){
		return n;
	}
	
	else{
		return (n%10)+sumOfDigits(n/10);
	}	
}

