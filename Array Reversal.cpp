#include<iostream>

using namespace std;

void reverse_array(int*arr, int size){
	int *start = arr;
	int *end = arr + size - 1;
	while(start < end){
		int temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main(){
	
	int A[7] = {12,23,4,234,53,5,57};
	int size = 7;
	
	reverse_array(A, 7);
	
	for(int i = 0; i<size; i++){
		cout<<A[i]<<" ";
	}
}
