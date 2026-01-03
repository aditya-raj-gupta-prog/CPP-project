#include<iostream>

using namespace std;

int gcd(int m, int n){
	
	if(n == 0){
		return m;
	}
	else{
		return gcd(n,m%n);
	}
}

int main(){
	int m, n;
	do{
	cout<<"Enter two numbers(m,n): ";
	cin>>m>>n;
	}
	while(m<=0 || n<=0);
	
	cout<<"The Gcd of "<<m<<" and "<<n<<" is "<<gcd(m,n)<<endl;
	
}
