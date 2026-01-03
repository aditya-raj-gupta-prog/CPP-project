#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int num;
	do{
	cout<<"Enter a non negative integer: ";
	cin>>num;
}
while(num<0);
if(num == 0){
	int fact = 1;
	cout<<"The Factorial is "<<fact;
}
else{
	int fact = 1;
	for(int i = num; i>1;i--){
		fact = fact*i;
	}
		cout<<"The Factorial is "<<fact;
}


}
