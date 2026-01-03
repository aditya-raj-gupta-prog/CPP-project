#include<iostream>
#include<string>

using namespace std;

int main(){
	int n;
	
	cout<<"Enter Number of Lines: ";
	cin>>n;
	
	cout<<"\nPattern:\n";
	
	for(int i = 1; i<= n; i++){
		for(int j = 1; j <= n-i; j++){
			cout<<" ";
		}
		
		char currentChar = 'A';
		
		for(int k = 1; k <= (2*i-1); k++){
			cout<<currentChar;
			currentChar++;
		}	
	cout<<endl;
}
}
