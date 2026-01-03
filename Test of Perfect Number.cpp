#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
	int n, i;
	char ans;
	do{
	int s=0;
	cout<<"Enter a Number: ";
	cin>>n;
	
	for( int i = 1; i < n; i++){
		if(n%i == 0){
			s = s+i;
		}
}
	if(s == n){
		cout<<"The Number is Perfect."<<endl;	
	}
	
	else{
		cout<<"The Number is Not Perfect."<<endl;
	}
	
	cout<<"Do you want to continue?: Press 'y' to continue or press any other key to exit\n";
	cin>>ans;
	
	ans = toupper(ans);
	
}
while( ans=='Y');
}

