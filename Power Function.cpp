#include<iostream>

using namespace std;

double Power(double base, int exponent){
	double result = 1;
	
	if(exponent>=0){
		for(int i = 0; i<exponent;i++){
			result = result*base;
		}
	}
	else if(exponent<0){
		for(int i = 0; i<(-exponent);i++){
			result = result/base;
		}
	}
	
	return result;
}
	
	int main(){
		double base;
		int exponent;
		
		cout<<"Enter the base number: ";
		cin>>base;
		
		cout<<"Enter the exponential power: ";
		cin>>exponent;
		
		cout<<"The Result will be: "<<Power(base, exponent)<<endl;
	}



