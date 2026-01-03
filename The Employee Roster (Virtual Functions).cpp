#include<iostream>
#include<string>
using namespace std;
class Employee{
	protected:
		string name;
		float baseSalary = 40000;
		
	public:
	virtual void calculatePay(){
		cout<<"Base Salary: "<<baseSalary;
	}	
};
class Manager: public Employee{
	private:
		float managerBonus = 10000;
		
	public:
		void calculatePay(){
			cout<<"Manager's Salary: "<<(baseSalary + managerBonus)<<endl;
		}

};

class Engineer: public Employee{
	private:
		float overtimeHours = 6;
		
	public:
	void calculatePay(){
		cout<<"Engineer's Salary: "<<(baseSalary + overtimeHours*50)<<endl;
	}	
};	

int main(){
	Employee *empPtr;
	Manager m;
	Engineer e;
	
	empPtr = &m;
	empPtr->calculatePay();
	empPtr = &e;
	empPtr->calculatePay();
}
