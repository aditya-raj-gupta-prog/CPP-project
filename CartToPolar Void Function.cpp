#include<iostream>
#include<cmath>

using namespace std;

void CartToPolar(double x, double y, double &r, double &theta){
	r = sqrt((x*x)+(y*y));
	theta = (atan2(y, x))*(180/(M_PI));
}

int main(){
	double x, y, r, theta;
	
	cout<<"Enter the x coordinate: ";
	cin>>x;
	
	cout<<"Enter the y coordinate: ";
	cin>>y;
	
	CartToPolar(x, y, r, theta);
	
	cout<<"r: "<<r<<endl;
	cout<<"theta: "<<theta<<endl;
	
	return 0;
}
