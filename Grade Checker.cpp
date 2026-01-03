#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double n_1, n_2, n_3;
	cout<<"Enter the Marks of Student in Subject 1: ";
	cin>>n_1;
	cout<<"Enter the Marks of Student in Subject 2: ";
	cin>>n_2;
	cout<<"Enter the Marks of Student in Subject 3: ";
	cin>>n_3;
	
	double avg = (n_1 + n_2 + n_3)/(3);
	
	if(avg>=90){
		cout<<"A";
	}
	if(avg>=80){
		cout<<"B";
	}
	if(avg>=70){
		cout<<"C";
	}
	if(avg>=60){
		cout<<"D";
	}
	if(avg>=40){
		cout<<"P";
	}
	else{
		cout<<"F";
	}
	
}
