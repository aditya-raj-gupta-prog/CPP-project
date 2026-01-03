#include<iostream>
#include<string>
using namespace std;

class Car{
		
	public:
		string model;
		bool isEngineOn;
		double fuelLevel;
		Car(string m){
			model = m;
			isEngineOn = false;
			fuelLevel = 0.0;
		}
		
		void operator += (double amount){
			if(amount<0){
				cout<<"Cannot refuel a negative amount."<<endl;
				return;
			}
			
			fuelLevel += amount;
			
			if(fuelLevel>100.0){
				double extra = fuelLevel - 100.0;
				cout<<"Refueled. "<<extra<<"L spilled."<<endl;
				fuelLevel = 100.0;
			}
			else{
				cout<<"Refueled."<<endl;
				cout<<"Current Fuel Level: "<<fuelLevel<<"L."<<endl;
			}	
			}
			
			void startEngine(){
				if(fuelLevel>0){
					cout<<"Vroom!"<<endl;
				}
				else{
					cout<<"No Fuel."<<endl;
				}
			}
			
			void drive(){
				if(!isEngineOn){
					cout<<"Engine is Off."<<endl;
				}
				else if(fuelLevel>=10.0){
					fuelLevel -= 10.0;
					cout<<"Driving!"<<endl;
					cout<<"Fuel Remaining: "<<fuelLevel<<endl;
				}
				else{
					cout<<"No Fuel"<<endl;
					isEngineOn = false;
					fuelLevel = 0.0;
				}
			}
};

ostream& operator<<(ostream& os, const Car&c){
	os<<"Model: "<<c.model<<endl;
	os<<"Engine: "<<(c.isEngineOn ? "On":"Off")<<endl;
	os<<"Fuel Level: "<<c.fuelLevel<<endl;
}

int main(){
	Car myMustang("NFS");
	
	cout<<myMustang<<endl;
	
	myMustang.startEngine();
	 myMustang += 60.0;
	 myMustang += 50.0;
	 
	 myMustang.drive();
	 
	 cout<<"Final Status: "<<myMustang<<endl;
	 
	 return 0;
}
