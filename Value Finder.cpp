#include<iostream>

using namespace std;

int main(){
	int num;
	int A[8] = {12, 34, 5, 42, 7, 68, 22, 19};
	cout<<"Enter a Number: ";
	cin>>num;
	for(int i = 0; i < 8; i++){
		int flag = 0;
		if(A[i] == num){
			flag = 1;
		}
	if(flag == 1){
		cout<<num<<" was found at index "<<i<<endl;
		break;
	}
	else{
}
		cout<<num<<" was not found at index "<<i<<endl;
	}
	}

	
