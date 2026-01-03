#include<iostream>

using namespace std;

int main(){
	int A = 100;
	
	int *P1 = &A;
	int **P2 = &P1;
	cout<<"The value of A is "<<A<<" "<<*P1<<" "<<**P2<<endl;
	cout<<"The Address of A is "<<&A<<" "<<P1<<endl;
	cout<<"The Memory Address of P1 is "<<&P1<<" "<<P2<<endl;
}


