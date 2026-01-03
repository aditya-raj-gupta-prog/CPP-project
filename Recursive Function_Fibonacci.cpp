#include<iostream>

using namespace std;

long long fibonacci(int n);

int main(){
	int i;
	
	cout<<"Enter the position in Fibonacci sequence: ";
	cin>>i;
	
	if(i<=0){
		cout<<"Error: Please Enter a Positive Integer."<<endl;
		return 1;
	}
	
	long long result = fibonacci(i);
	cout<<i; 
	
	if(i%10 == 1 && i%100 != 11) cout<<"st";
	else if(i%10 == 2 && i%100 != 12) cout<<"nd";
	else if(i%10 ==3 && i%100 != 13) cout<<"rd";
	else cout<<"th";
	
	cout<<"Fibonacci Term is: "<<result<<endl;
	return 0;
	}
	
	long long fibonacci(int n){
		if(n==1) {
			return 0;
		}
		else if(n==2){
			return 1;
		}
		else{
			return fibonacci(n-1)+fibonacci(n-2);
		}
	}
