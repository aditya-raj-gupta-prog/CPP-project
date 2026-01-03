#include<iostream>
#include<cmath>
#include<cctype>

using namespace std;

int main(){
	int n;
	float sum = 0;
	int k;
	cout<<"Till how many terms do you want to approximate: ";
	cin>>n;
	
	for(int i = 1; i<=n; i++){
		k = (2*i)- 1;
		
		if(i % 2 == 0 ){
		sum = sum - (4.0)/(k);
		}
		
		else{
			sum = sum + (4.0)/(k);
		}
	
	
	}
	
	cout<<"The approximate value of PI is "<<sum<<endl;
}
