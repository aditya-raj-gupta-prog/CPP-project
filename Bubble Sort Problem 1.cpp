#include<iostream>

using namespace std;

void bubbleSort(int arr[], int n){
		for(int i = 0; i < n-1; i++){
			for(int j = 0; j < n-1-i; j++){
				if (arr[j] > arr[j+1]){
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
	}
int main(){
	int data[] = {1,2,3,5,6,9};
	int size = 6;
	bubbleSort(data, size);
	cout<<"The Sorted Array is: ";
	for(int i = 0; i < size; i++){
	cout<<data[i]<<" ";
	}
	cout<<endl;
}
