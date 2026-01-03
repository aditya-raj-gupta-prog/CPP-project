#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double x, y, z;
	cout<<"Enter the X coordinate: ";
	cin>>x; 
	cout<<"Enter the Y coordinate: ";
	cin>>y; 
	cout<<"Enter the Z coordinate: ";
	cin>>z; 
	
	double radius = sqrt((x*x)+(y*y)+(z*z));
	double phi = atan2(y, x);
	double theta = acos(z/(radius));
	
	double phi_deg = (phi)*(180/(M_PI));
	double theta_deg = (theta)*(180/(M_PI));
	cout<<"r = "<<radius<<"theta = "<<theta_deg<<"phi = "<<phi_deg<<endl;
}
