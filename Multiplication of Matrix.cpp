#include<iostream>

using namespace std;

int main(){
	double A[2][2], B[2][2], mul[2][2];
	cout<<"Entries for matrix 1: "<<endl;
	for(int i = 0; i<2; i++){
		cout<<endl;
		for(int j = 0; j<2; j++){
			cout<<"\t";
			cin>>A[i][j];
		}
	}
	cout<<"Entries for matrix 2: "<<endl;
	for(int i = 0; i<2; i++){
		cout<<endl;
		for(int j = 0; j<2; j++){
			cout<<"\t";
			cin>>B[i][j];
		}
	}
	for(int i = 0; i<2; i++){
		for(int j = 0; j<2; j++){
			mul[i][j] = 0;
		for(int k = 0; k<2; k++){
			mul[i][j] = mul[i][j] + (A[i][k])*(B[k][j]);
		}
		}
			}
			
		cout<<"The Matrix will be: "<<endl;
		for(int i = 0; i<2; i++){
			for(int j = 0; j<2; j++){
				cout<<mul[i][j]<<" ";
			}
			cout<<endl;
		}
		}
