		#include<iostream>
		
		using namespace std;
		
		int** createMultiplicationTable(int rows, int cols){
		int** table = new int*[rows];
		
		for (int i = 0; i<rows; i++){
			*(table+i) = new int[cols];
		}
		for(int i = 0; i<rows; i++){
			for(int j = 0; j<cols; j++){
				*(*(table+i)+j) = (i+1)*(j+1);
			}
		}
		return table;
		}
		
		void deleteTable(int** table, int rows){
			for(int i = 0; i<rows; i++){
				delete[] *(table+i);
			}
			delete[] table;
		}
		int main(){
			int rows, cols;
			cout<<"Enter the number of rows: ";
			cin>>rows;
			cout<<"Enter the number of columns: ";
			cin>>cols;
			int**Table = createMultiplicationTable(rows, cols);
			
			if( Table != NULL){
				cout<<"The Generated Table is: "<<endl;
				
			for(int i = 0; i<rows; i++){
				for(int j = 0; j<cols; j++){
					cout<<*(*(Table+i)+j)<<" ";
				}
				cout<<endl;
			}
			deleteTable(Table, rows);
			cout<<"The Table memory has been freed."<<endl;
		}
		}
