#include<iostream>
#include<cmath>
using namespace std;
struct complex {
	double r, i;
	
	double mag(){
		return (sqrt(r*r + i*i));
	}
	
	double arg(){
		return atan2(i, r);
	}
	
	void print() {
		cout<<r<<(i>0 ? "+":"-")<<fabs(i)<<"i";
	}
};

complex conj(const complex &z){
	complex zc;
	zc.r = z.r;
	zc.i = -z.i;
	return zc;
}


complex add(const complex &z1, const complex &z2){
	complex z3;
	z3.r = z1.r + z2.r;
	z3.i = z1.i + z2.i;
	return z3;
}

int main(){
	complex z1, z2;
	cout<<"Enter the real and imaginary part of complex number: ";
	cin>>z1.r>>z1.i;
	
	cout<<endl<<"The First Number: ";
	z1.print();
	cout<<endl;
	
	cout<<"Magnitude = "<<z1.mag()<<endl;
	cout<<"Argument = "<<(180/M_PI)*(z1.arg())<<" degrees"<<endl;
	cout<<"Complex Conjugate = ";
	conj(z1).print();
	cout<<endl<<"Enter the real and imaginary part of complex number: ";
	cin>>z2.r>>z2.i;
	
	cout<<endl<<"The First Number: ";
	z2.print();
	cout<<endl<<"Magnitude = "<<z2.mag()<<endl;
	cout<<"Argument = "<<(180/M_PI)*(z2.arg())<<" degrees"<<endl;
	cout<<"Complex Conjugate = ";
	conj(z2).print();
	
	cout<<endl<<"Sum of ";
	z1.print();
	cout<<" and ";
	z2.print();
	cout<<" = ";
	add(z1, z2).print();
	}
