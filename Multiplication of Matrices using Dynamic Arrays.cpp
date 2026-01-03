#include<iostream>

using namespace std;

void deleteMatrix(int** matrix, int rows){
	for(int i = 0; i<rows; i++){
		delete[] *(matrix+i);
	}
	delete[] matrix;
}

void printMatrix(int** matrix, int rows, int cols){
	for(int i = 0; i<rows; i++){
		for(int j = 0; j<cols; j++){
			cout<<*(*(matrix+i)+j)<<" ";
		}
		cout<<endl;
	}
}

int** multiplyMatrices(int** A, int rowsA, int colsA, int** B, int rowsB, int colsB){
	if(colsA != rowsB){
		cout<<"Error: Matrix Dimensions are not compatible";
		return NULL;
	}
		int** C = new int*[rowsA];
		
		for(int i = 0; i<rowsA; i++){
			*(C + i) = new int [colsB];
		}
		
		for(int i = 0; i<rowsA; i++){
			for(int j = 0; j<colsB; j++){
				int sum = 0;
				for(int k = 0; k<colsA; k++){
					sum	= sum + (*(*(A+i)+k))*(*(*(B+k)+j));
				}
				*(*(C+i)+j) = sum;
			}
		}
		return C;
		
	}

int main(){
	int rowsA, rowsB, colsA, colsB;
	cout<<"Enter the Number of Rows of Matrix 1: ";
	cin>>rowsA;
	cout<<"Enter the Number of Columns of Matrix 1: ";
	cin>>colsA;
	cout<<"Enter the Number of Rows of Matrix 2: ";
	cin>>rowsB;
	cout<<"Enter the Number of Columns of Matrix 2: ";
	cin>>colsB;
	cout<<"Enter the elements of Matrix 1: "<<endl;
	int** A = new int*[rowsA];
	for(int i = 0; i<rowsA; i++){
		*(A + i) = new int [colsA];
	}
	for(int i = 0; i<rowsA; i++){
		for(int j = 0; j<colsA; j++){
			cin>>*(*(A+i)+j);
		}
	}
	cout<<"Enter the elements of Matrix 2: "<<endl;
	int** B = new int*[rowsB];
	for(int i = 0; i<rowsB; i++){
		*(B + i) = new int [colsB];
	}
	for(int i = 0; i<rowsB; i++){
		for(int j = 0; j<colsB; j++){
			cin>>*(*(B+i)+j);
		}
	}
	
	int** MUL = multiplyMatrices(A, rowsA, colsA, B, rowsB, colsB);
	if(MUL !=NULL){
	printMatrix(MUL, rowsA, colsB);
	deleteMatrix(MUL, rowsA);
}
	deleteMatrix(A, rowsA);
	deleteMatrix(B, rowsB);
	cout<<"The Matrix memory has been cleared.";
}

