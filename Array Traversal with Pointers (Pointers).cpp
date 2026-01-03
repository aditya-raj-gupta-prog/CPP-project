#include<iostream>

using namespace std;

int main(){
	int num;
	cout<<"Enter the Number of Values you wish to enter: ";
	cin>>num;
	int A[num];
	cout<<"Enter the Values: "<<endl;
	for(int i = 0; i<num; i++){
		cin>>A[i];
	}
	
	int *ptr = &A[0];
	for(int i = 0; i<num;i++){
		cout<<*ptr;
		ptr++;
	}
}
