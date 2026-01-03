#include<iostream>

using namespace std;

int main(){
	int n, d = 0;
	
	cout<<"Enter the Number: ";
	cin>>n;
	
	for(int i = 1; i<=n; i++){
		if( n%i == 0){
			d++;
		}
	}
	if(d>2){
		cout<<"The Number is not a Prime.";
	}
	else{
		cout<<"The Number is Prime.";
}
}
