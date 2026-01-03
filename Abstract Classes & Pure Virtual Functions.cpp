#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Shape{
	protected:
		string name;
	public:
	Shape(string n){
		name = n;
	}		
	virtual double getArea() = 0;
	
	void printName(){
		cout<<endl<<"Shape type: "<<name<<endl;
	}
	virtual ~Shape() {};
};

class Circle : public Shape{
	private:
		float radius;
	public:
		float r;
		Circle(float r) : Shape("Circle"), radius(r){
			cout<<"Circle Constructor was Called."<<endl;
		}
		double getArea() override{
		return M_PI * (pow(radius, 2));
		}
};

class Rectangle : public Shape{
	private:
		float length, width;
	public:
		Rectangle(float l, float w) : Shape("Rectangle"), length(l), width(w){
			cout<<"Rectangle Constructor was Called."<<endl;
		}
		
		double getArea() override{
		return length*width;
		}
};
int main(){
	Shape *pShape;
	
	Circle c(5.0);
	
	Rectangle r(4.0, 6.0);
	
	cout<<"Pointing to Circle";
	pShape = &c;
	pShape->printName();
	cout<<"The Area: "<<pShape->getArea()<<endl;
	
	cout<<"Pointing to Rectangle";
	pShape = &r;
	pShape->printName();
	cout<<"The Area: "<<pShape->getArea();
	
	return 0;
}
