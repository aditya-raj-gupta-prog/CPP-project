#include<iostream>

using namespace std;

long long sumSubArray(int *start, int *end){
	long long sum = 0;
	while(start<=end){
		sum = sum + *start;
		start++;
	}
	return sum;
}

int main(){
	int data[]={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int *start_ptr = data + 2;
	int *end_ptr = data + 6;
	
	long long sum = sumSubArray(start_ptr, end_ptr);
	
	cout<<"The Sub Array is: ";
	for(int *p = start_ptr; p <= end_ptr; p++){
		cout<<*p<<" ";
	} 
	cout<<endl;
	cout<<"The Sum of elements of Sub Array is: "<<sum;
}
