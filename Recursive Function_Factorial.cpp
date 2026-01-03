#include<iostream>

using namespace std;

unsigned long long factorial(int n);

int main(){
	int input;
	
	cout<<"Enter a Number: ";
	cin>>input;
	
	unsigned long long result = factorial(input);
	
	if(input < 0 ){
	cout<<"Enter a Valid number, Factorial is not defined for negative numbers."<<endl;
	return 1;
	}
	
	cout<<"The Factorial is: "<<result<<endl;
	
	return 0;
	
}

unsigned long long factorial(int n){
	
	if(n==0){
		return 1;
	}
	
	else{
		return (n)*factorial(n-1);
	}
}


