#include<iostream>

using namespace std;

int square(int num);

int main(){
	int inp, out;
	
	cout<<"Enter a Number: ";
	cin>>inp;
	
	out = square(inp);
	
	cout<<"Original: "<<inp<<", Squared: "<<out<<endl;
	
	return 0;
}

int square(int num){
	return (num)*(num);
}
