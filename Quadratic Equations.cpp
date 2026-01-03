#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double a, b, c;
	cout<<"Enter of Coeffecient of X^2: ";
	cin>>a;
	cout<<"Enter of Coeffecient of X: ";
	cin>>b;
	cout<<"Enter the constant: ";
	cin>>c;
	
	double D = ((b*b)- 4*a*c);
	if (D>0){
		double root_D = sqrt(D);
		double r_1 = (-b + root_D)/(2*a);
	    double r_2 = (-b - root_D)/(2*a);
	
	cout<<"The Roots are "<<r_1<<" and "<<r_2;	
	}
	else if(D == 0){
		double r = (-b)/(2*a);
		cout<<"The Root is "<<r;		
	}
	else if(D<0){
		double root_D = sqrt((-1)*D);
		
		cout<<"The Complex Roots are "<<(-b)/(2*a)<<" + "<<(root_D)/(2*a)<<"i"<<" and "<<(-b)/(2*a)<<" - "<<(root_D)/(2*a)<<"i";
	}
	
}
