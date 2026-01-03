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
	int num;
	cout<<"Enter the Number of Elements: ";
	cin>>num;
	int values[num];
	
	cout<<"Enter the elements in the function: ";
	for(int i = 0; i<num; i++){
		cin>>values[i];
	}
	findMax(values, num);
	 return 0;
}
