#include<iostream>
#include<string>
using namespace std;

 class Shape{
 	protected:
 		string color;
 		
 	public:
	 Shape(string c){
	 	color = c;
	 	
	 	cout<< "Shape Constructor was called. (Color: "<<color<<")"<<endl;
		  
		  }
		  
	void displayColor(){
		cout<<"Color: "<<color<<endl;
	}	  
	
	~Shape(){
		cout<<"Shape Destructor was Called.(Color: "<<color<<")"<<endl;
	}  	  	
 };
 
 
 class Rect: public Shape{
 	private:
 		double width, height;
 		
 	public:
	 Rect(string c, double w, double h): Shape(c){
	 	width = w;
	 	height = h;
	 	cout<<"Rectangle constructor was called. (Width = "<<width<<", Height = "<<height<<")"<<endl;
	 }
	 
	 double Area(){
	 	return height*width;
	 }	
	 
	 double Perimeter(){
	 	return 2*(height + width);
	 }
	 
	 void display(){	
	 cout<<"Rectangle Details: "<<endl;
	 
	 displayColor();
	 
	 cout<<"Height = "<<height<<", Width = "<<width<<endl;
	 }
	 
	 ~Rect(){
	 	cout<<"Rectangle destructor was Called."<<endl;
	 }
 };
 
 int main(){
 	cout<<"Creating Rectangle Object: "<<endl;
 	
 	Rect myrect("Blue", 3.0, 4.0);
 	
 	myrect.display();
 	
 	cout<<"Area = "<<myrect.Area()<<endl;
 	
 	return 0;
	 
 }
