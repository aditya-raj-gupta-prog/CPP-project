#include<iostream>
#include<string>
using namespace std;
class Animal{
	protected:
		string name;
	public:
		Animal(string n){
			name = n;
		}
		void printName(){
			cout<<"Animal: "<<name<<endl;
		}
		virtual void makeSound() = 0;
	virtual ~Animal(){}	
};

class Lion : public Animal{
	public:
	Lion() : Animal("Lion"){
		cout<<"Lion Constructor was Called."<<endl;
	}
	void makeSound() override{
	cout<<"Roar!"<<endl;
	}
};

class Zebra : public Animal{
	public:
		Zebra() : Animal("Zebra"){
			cout<<"Zebra Constructor was Called."<<endl;
		}
		void makeSound() override{
		cout<<"Neigh!"<<endl;
		}
};

class Parrot : public Animal{
	private:
		string phrase;
	public:
		
		Parrot(string p) : Animal("Parrot"), phrase(p){
			cout<<"Parrot Constructor was Called."<<endl;
		}
		void makeSound() override{
		cout<<"Squack!"<<endl;
		cout<<"Parrot Says: "<<phrase<<endl;
		}
};


int main(){
	Animal *zoo[3];
	
	zoo[0] = new Lion();
	zoo[1] = new Zebra();
	zoo[2] = new Parrot("Bol BSDK");
	
	for(int i = 0; i<3; i++){
		zoo[i]->makeSound();
	}
	for(int i = 0; i<3; i++){
		delete zoo[i];
	}
	
	
}
