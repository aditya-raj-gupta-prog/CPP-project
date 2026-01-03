#include<iostream>
#include<cmath>
using namespace std;

class Vector3D{
	private:
		double x, y, z;
		
	public:
	Vector3D(double x_val = 0, double y_val = 0, double z_val = 0){
		x = x_val;
		y = y_val;
		z = z_val;
	}	
	friend Vector3D operator + (const Vector3D& v1, const Vector3D& v2);
	friend bool operator == (const Vector3D& v1, const Vector3D& v2);
	friend ostream& operator << (ostream& os, const Vector3D& v);
};

ostream& operator << (ostream& os, const Vector3D&v){
	os<<"("<<v.x<<", "<<v.y<<", "<<v.z<<")";
	return os;	
}

Vector3D operator + (const Vector3D& v1, const Vector3D& v2){
	Vector3D v_sum;
	
	v_sum.x = v1.x + v2.x;
	v_sum.y = v1.y + v2.y; 
	v_sum.z = v1.z + v2.z;
	
	return v_sum;  
}

bool operator == (const Vector3D& v1, const Vector3D& v2){
	if(v1.x == v2.x || v1.y == v2.y || v1.z == v2.z){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	Vector3D v1(1,2,3);
	Vector3D v2(1,2,3);
	
	Vector3D v3 = v1 + v2;
	
	cout<<"v1 = "<<v1<<endl;
	cout<<"v2 = "<<v2<<endl;
	cout<<"v1 + v2 = "<<v3<<endl;
	cout<<"v1==v2?"<<(v1 == v2 ? "true":"false")<<endl;
	cout<<"v1==v3?"<<(v1 == v3 ? "true":"false")<<endl;
	
	return 0;
}
