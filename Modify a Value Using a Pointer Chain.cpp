#include<iostream>

using namespace std;

int main(){
	int A = 100;
	int *P1 = &A;
	int **P2 = &P1;
	cout<<A<<endl;
	
	**P2 = 999;
	cout<<"The New Value of A will be: "<<A;
}
