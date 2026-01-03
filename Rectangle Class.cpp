#include<iostream>

using namespace std;

class Rectangle{
	private:
		double length, width;
		
	public:
		
		void setDimensions(double l, double w){
			if(l<=0 || w<=0){
				cout<<"Please Enter Valid Values."<<endl;
				length = 0;
				width = 0;
			}
			else{
				length = l;
				width = w;
			}
		
		}
		
		double getArea(){
			double area = length*width;
			
			return area;
		}
		
		double getPerimeter(){
			double perimeter = 2*(length+width);
			
			return perimeter;
		}
		
		void display(){
			cout<<"Length: "<<length<<endl;
			cout<<"Width: "<<width<<endl;
		}
};

int main(){
	cout<<"Creating a Rectangle."<<endl;
	Rectangle rect;
	double length, width;
	do{
	cout<<"Enter the Length: ";
	cin>>length;
	cout<<"Enter the Width: ";
	cin>>width;
	rect.setDimensions(length, width);
} while(length<=0 || width<=0);
	rect.display();
	cout<<"Area: "<<rect.getArea()<<endl;
	cout<<"Perimeter: "<<rect.getPerimeter()<<endl;
	
	return 0;
}
