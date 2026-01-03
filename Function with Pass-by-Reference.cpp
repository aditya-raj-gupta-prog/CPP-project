#include<iostream>

using namespace std;

void swap(int &a, int &b);

int main(){
	int num1, num2;
	cout<<"Enter two numbers: ";
	cin>>num1>>num2;
	
	cout<<"Before Swap: num1 = "<<num1<<", num2 = "<<num2<<endl;
	
	swap(num1, num2);
	
	cout<<"After Swap: num1 = "<<num1<<", num2 = "<<num2<<endl;
	
	return 0;
}

void swap(int &a, int&b){
	int temp = a;
	a = b;
	b = temp;
}
