#include<iostream>

using namespace std;
class Matrix{
	private:
	int **data;
	int rows, cols;
	
	public:
	Matrix(int r, int c){
		rows = r;
		cols = c;
		data = new int*[rows];
		for(int i = 0; i<rows; i++){
			data[i] = new int[cols];
		}
		
		for(int i = 0; i<rows; i++){
			for(int j = 0; j<cols; j++){
				*(*(data+i)+j)= 0;
			}	
		}
		cout<<"Matrix Allocated."<<endl;	
	} 
	
	~Matrix(){
		for(int i = 0; i<rows; i++){
			delete[] *(data+i);
		}
		delete[] data;
		
		cout<<"Matrix Was Deleted."<<endl;
	}
	
	void setElement(int r, int c, int value){
		data[r][c] = value;
	}
	int getElement(int r, int c){
		return data[r][c];
	}
	
	void display(){
		for(int i = 0; i<rows; i++){
			for(int j = 0; j<cols; j++){
				cout<<data[i][j]<<" ";
			}
			cout<<endl;
		}
	}
};
int main(){
	Matrix m1(3,4);
	m1.setElement(1,2,14);
	
	m1.display();
	
}
