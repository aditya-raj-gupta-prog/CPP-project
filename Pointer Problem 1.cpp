#include<iostream>

using namespace std;

int main(){
	int quantity = 50;
	int *qty_ptr = &quantity;
	cout<<*qty_ptr<<endl;
	*qty_ptr = 75;
	cout<<quantity<<endl;
}
