#include<iostream>

using namespace std;

void in(int &passcode){
	do{
		cout<<"Enter a 4 digit passcode: ";
		cin>>passcode;
	}
	while(passcode<1000 || passcode>9999);
}

void check(const int &password){
	const int system_pass = 1234;
	
	if(password == system_pass){
		cout<<"Login Successful"<<endl;
	}
	else{
		cout<<"Login Failed"<<endl;
	}
}

int SumDigits(const int &passcode){
	int sum = 0;
	int temp = passcode;
	
	while(temp>0){
		sum = sum + temp%10;
		temp = temp/10;
	}
	return sum;
}

int main(){
	int input;
	in(input);
	check(input);
	cout<<"The Sum of Digits is: "<<SumDigits(input)<<endl;
}
