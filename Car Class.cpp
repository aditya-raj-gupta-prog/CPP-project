#include<iostream>
#include<string>
using namespace std;

class Car{
	private:
		string model;
		bool isEngineOn;
		double fuelLevel;
		
	public:
		void setup(string m){
			model = m;
			isEngineOn = 0;
			fuelLevel = 0.0;
		}
		
		void refuel(double amount){
			fuelLevel += amount;
			
			if(fuelLevel>=100.0){
				cout<<"Alert! Overfueling."<<endl;
				fuelLevel = 100.0;
				cout<<"Extra Fuel: "<<(fuelLevel - 100.0)<<endl;
			}
	}
		void startEngine(){
			if(fuelLevel>0){
				isEngineOn = true;
				cout<<"Vroom!"<<endl;
			}
			else{
				isEngineOn = false;
				cout<<"No Fuel"<<endl;
			}
		}	
		void drive(){
			if(isEngineOn){
				if(fuelLevel>=10.0){
				fuelLevel = fuelLevel - 10.0;
				cout<<"Driving..."<<endl;
			}
			else{
				cout<<"No Fuel"<<endl;
				isEngineOn = false;
				fuelLevel = 0;
			}	
		}
		else{
			cout<<"Engine is Off."<<endl;
		}
	}
		
		void displayStatus(){
			cout<<"Model: "<<model<<endl;
			if(isEngineOn){
				cout<<"Engine Status ON"<<endl;
			}
			else{
				cout<<"Engine Status OFF"<<endl;
			}
			cout<<"Fuel Level: "<<fuelLevel<<endl;
		}
		
};

int main(){
	Car myMustang;
	
	myMustang.setup("Mustang GT");
	
	myMustang.drive();
	
	myMustang.startEngine();
	
	myMustang.refuel(50);
	
	myMustang.startEngine();
	
	myMustang.drive();
	
	myMustang.displayStatus();
	
	for(int i = 0; i<6; i++){
		myMustang.drive();
	}
	
	myMustang.displayStatus();
}
