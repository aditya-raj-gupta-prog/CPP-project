#include<iostream>

using namespace std;

int main(){
	double num[4];
	for(int i = 0; i < 4; i++){
		int input;
		int sum = 0;
		cout<<"Enter the "<<i+1<<" value:";
		cin>>input;
		num[i] = input;
	}
	double sum = 0;
	for(int i = 0; i < 4; i++){
		sum = num[i] + sum;
	}
	
	cout<<"The Sum is "<<sum<<endl;
	return 0;
}
