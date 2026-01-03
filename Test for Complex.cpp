#include<iostream>
#include<cmath>
using namespace std;
class Complex{
		
	public:
	double r, i;
	Complex(double real = 0, double imag = 0){
		r = real;
		i = imag;
	}	
	
	Complex operator + (Complex&z){
		Complex zs;
		zs.r = r + z.r;
		zs.i = i + z.i;
		return zs;
	}
	Complex operator * (){
		Complex zconj;
		zconj.r = r;
		zconj.i = -i;
		return zconj;
	}
	
	Complex operator ^ (Complex&z1){
		Complex mul;
		
		mul.r = (r)*(z1.r) - (i)*(z1.i);
		mul.i = (r)*(z1.i) + (i)*(z1.r);
		
		return mul;
	}
	
};

ostream& operator << (ostream& os, const Complex&z){
	os<<z.r<<(z.i>=0 ? "+":"-")<<fabs(z.i)<<"i"<<endl;
}

istream& operator >> (istream& is, const Complex&z){
	is>>z.r>>z.i;
}
int main(){
	Complex c1(2,3);
	Complex c2(4,-5);
	
	cout<<"z1 = "<<c1<<endl;
	cout<<"z2 = "<<c2<<endl;
	
	Complex c3 = c1 + c2;
	
	cout<<"z1 + z2 = "<<c3<<endl;
	
	Complex c4;
	Complex c6 = c1 ^ c2;
	Complex c5 = *c1;
	cout<<"The Conjugate of z1 = "<<c5<<endl;
	cout<<"z1 * z2 = "<<c6<<endl;
	cout<<"Enter Real and Imaginary Part of Complex Numbers: ";
	cin>>c4;
	cout<<c4;
	return 0;
	 	
}
