#include<iostream>
#include<string>

using namespace std;

class Employee{
	public: 
	virtual void CalculatePay(){
		cout<<"Calculating Pay for Generic Employees."<<endl;
	}
	
	virtual ~Employee(){
	}
};

class SalaryEmployee : public Employee {
	public:
		double annualSalary = 520000;
		
		void CalculatePay() override {
		double weeklyPay = annualSalary / 52;
		cout<<"Salaried Employee Weekly Pay: "<<weeklyPay<<endl;
		}
};

class HourlyEmployee : public Employee {
	public:
		double HourlyRate = 20;
		int HoursWorked = 40;
		
		void CalculatePay() override{
		double weeklyPay = HourlyRate * HoursWorked;
		cout<<"Hourly Employee Weekly Pay: "<<weeklyPay<<endl;
		}
};
int main(){
	Employee *empPtr;
	
	SalaryEmployee s;
	HourlyEmployee h;
	
	cout<<"Pointing to SalaryEmployee."<<endl;
	
	empPtr = &s;
	
	
	empPtr->CalculatePay();
	
	cout<<"Pointing to HourlyEmployee."<<endl;
	empPtr = &h;
	
	empPtr->CalculatePay();
	
	Employee empObj;
	
	empObj.CalculatePay();
	
	return 0;
	}
