#include<iostream>

using namespace std;

int add(int a, int b);

int main(){
	int num1, num2, result;
	
	cout<<"Enter Two Numbers: ";
	cin>>num1>>num2;
	
	result = add(num1, num2);
	
	cout<<"The Result is: "<<result<<endl;
	
	return 0;
}

int add(int a, int b){
	return a+b;
}
