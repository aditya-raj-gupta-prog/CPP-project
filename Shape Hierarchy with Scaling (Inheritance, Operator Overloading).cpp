#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Shape{
	private:
		string color;
		
	public:
	Shape(string c){
		color = c;
		cout<<"Shape Constructor was Called. Color: "<<color<<endl;
	}	
	
	void displayColor(){
		cout<<"Color: "<<color<<endl;
	}
	
	string getColor() const {return color;}
	
	~Shape(){
		cout<<"Shape Destructor was called."<<endl;
	}
};

class Rect: public Shape{
	private:
		double width, height;
		
	public:
	Rect(string c, double h, double w): Shape(c){
		height = h;
		width = w;
		cout<<"Rectangle Constructor was Called."<<endl;
		cout<<"Width: "<<width<<endl;
		cout<<"Height: "<<height<<endl;
	}
	
	double AreaR() const{
		return height*width;
	}
	
	double Perimeter() const{
		return 2*(height + width);
	}	
	
	void displayRect(){
		cout<<"Rectangle details: "<<endl;
		
		displayColor();
		
		cout<<"Width: "<<width<<endl;
		cout<<"Height: "<<height<<endl;	
	}
	Rect operator * (double scaleFactor){
		return Rect(getColor(), height*scaleFactor, width*scaleFactor);
	}
	
	friend ostream& operator << (ostream& os, const Rect& r);
	~Rect(){
		cout<<"Rectangle Destructor was Called."<<endl;
	}
};

class Circle: public Shape{
	private:
		double radius;
		
	public:
	
	Circle(string c, double r): Shape(c){
		radius = r;
	}	
	
	double AreaC() const{
		return (M_PI)*radius*radius;
	}
	
	double Circumference() const{
		return 2*(M_PI)*radius;
	}
	
	Circle operator * (double scaleFactor){
		return Circle(getColor(), radius * scaleFactor);
	}
	
	void displayCircle(){
		cout<<"Circle Details: "<<endl;
		
		displayColor();
		
		cout<<"Radius: "<<radius<<endl;
	}
	
	friend ostream& operator << (ostream& os, const Circle& B);
	
	~Circle(){
		cout<<"Circle Destructor was called."<<endl;
	}
};

ostream& operator << (ostream& os, const Circle&B){
	os<<"Radius: "<<B.radius;
	return os;
}

ostream& operator << (ostream& os, const Rect& A){
	os<<"Width: "<<A.width;
	os<<"Height: "<<A.height;
	
	return os;
}
int main(){
	
	Rect r1("Red", 3.0, 4.0);
	
	Circle c1("Blue", 5.0);
	
	r1.displayRect();
	c1.displayCircle();
	
	Rect r2 = r1 * 1.5;
	Circle c2 = c1 * 2.0;
	
	cout<<"Area of Rectangle 1: "<<r1.AreaR()<<endl;
	cout<<"Perimeter of Rectangle 1: "<<r1.Perimeter()<<endl;
	
	cout<<"Area of Circle 1: "<<c1.AreaC()<<endl;
	cout<<"Circumference of Circle 1: "<<c1.Circumference()<<endl;
	
	r2.displayRect();
	c2.displayCircle();
	
	cout<<"Area of Rectangle 2: "<<r2.AreaR()<<endl;
	cout<<"Perimeter of Rectangle 2: "<<r2.Perimeter()<<endl;
	
	cout<<"Area of Circle 2: "<<c2.AreaC()<<endl;
	cout<<"Circumference of Circle 2: "<<c2.Circumference()<<endl;
	
	return 0;
}
