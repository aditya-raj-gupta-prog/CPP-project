#include<iostream>
#include<cmath>

using namespace std;
class ShapeCalculator{
	private:
		double radius, length, width;
	public:
		void calculateArea(double radius){
			double area = M_PI*(pow(radius, 2));
			cout<<"The Area of Circle: "<<area<<endl;
			
		}
		void calculateArea(double length, double width){
			double area = length*width;
			cout<<"The Area of Rectangle: "<<area<<endl;
		}
};
int main(){
	double r, l, w;
	cout<<"Circle Calculator "<<endl;
	cout<<"Enter the Radius: ";
	cin>>r;
	ShapeCalculator calc;
	calc.calculateArea(r);
	cout<<"Rectangle Calculator "<<endl;
	cout<<"Enter the Length and Width: ";
	cin>>l>>w; 
	calc.calculateArea(l, w);
	return 0;
	
	
		
	
}
