#include<iostream>
#include<string>
#include<cmath>

using namespace std;
class Process{
	protected:
	public:
	Process(){
		cout<<"Process Created."<<endl;
	}	
	virtual ~Process(){
		cout<<"Process Destroyed."<<endl;
	}
	
	virtual void execute() = 0;
};

class DataProcessor : public Process{
	private:
		int *hugeArray;
	public:
	DataProcessor(){
		hugeArray = new int[100];
		cout<<"DataProcessor was Created and Memory was allocated."<<endl;
	}	
	~DataProcessor(){
	delete[] hugeArray;
	cout<<"Memory Freed and DataProcessor was Destroyed."<<endl;
}
void execute() override{
cout<<"Processing Data."<<endl;
}
};
int main(){
	Process *ptr = new DataProcessor();
	ptr->execute();
	delete ptr;
	
}
