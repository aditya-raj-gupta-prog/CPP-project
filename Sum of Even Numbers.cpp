#include<iostream>

using namespace std;

int main(){
	int n, s = 0;
	
	cout<<" Enter the Number of Even Numbers: ";
	cin>>n;
	
	for(int i = 1; i<=n; i++){
		s = s+(2*i);
	}
	cout<<"The Sum is: "<<s<<endl;
}
