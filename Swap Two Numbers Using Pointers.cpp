#include<iostream>

using namespace std;
void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
int main(){
	int num1, num2;
	cout<<"Enter the integers: ";
	cin>>num1>>num2;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	swap(*ptr1, *ptr2);
	cout<<"The Changed Numbers are "<<num1<<" and "<<num2<<endl;
	
}
