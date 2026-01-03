#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double x, y;
	cout<<"Enter the real part: ";
	cin>>x;
	
	cout<<"Enter the imaginary part: ";
	cin>>y;
	
	double modulus = sqrt((x*x)+(y*y));
	double argument_rad = atan2(y, x);
	double argument_deg = (argument_rad)*(180/(M_PI));
	
	cout<<"Modulus = "<<modulus<<endl;
	cout<<"Argument = "<<argument_deg<<endl;
	
	return 0;
}
