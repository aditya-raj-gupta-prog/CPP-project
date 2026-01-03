#include<iostream>

using namespace std;

int main(){
	int marks[2][3];
	
	for(int i = 0; i < 2; i++){
		int total = 0;
		
		cout<<"Enter the marks of Student "<<i+1<<endl;
		for(int j = 0; j < 3; j++){
			cout<<"Enter the Marks in Subject "<<j+1<<":";
			cin>>marks[i][j];
			
			total = total + marks[i][j];
		}
		
		cout<<"The total marks attained by Student "<<i+1<<" are: "<<total<<endl;
	}
	return 0;
}
