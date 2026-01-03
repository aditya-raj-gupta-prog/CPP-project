#include<iostream>

using namespace std;
void analyzeArray(int *p, int size){
	int sum = 0;
	cout<<"The Elements of Array: ";
	for(int i = 0; i<size; i++){
	cout<<*(p+i)<<" ";
	 sum = sum + *(p+i);
};
cout<<endl;
cout<<"The Sum of Elements will be: "<<sum<<endl;
int max = *p;
for(int i = 0; i<size; i++){
	if(*(p+i)>max){
		max = *(p+i);
	}
}
	cout<<"The Maximum value is: "<<max<<endl;
}
int main(){
	int arr[] = {5, -2, 10, 0, 8, 3};
	int size = 6;
	int *ptr = arr;
	
	analyzeArray(ptr, size);
	
	return 0;
	
	
	
}
