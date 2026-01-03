#include<iostream>

using namespace std;

void findMax(int arr[],int n){
	int maxVal = arr[0];
	for(int i = 0; i<n; i++){
		if(arr[i]>maxVal){
			maxVal = arr[i];
		}
	}
	cout<<"The Maximum Value is: "<<maxVal<<endl;	
	}
int main(){
	
	int values[10];
	
	cout<<"Enter the elements in the function: ";
	for(int i = 0; i<10; i++){
		cin>>values[i];
	}
	findMax(values, 10);
	 return 0;
}
