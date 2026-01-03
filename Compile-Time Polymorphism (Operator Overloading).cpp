#include<iostream>
#include<cmath>

using namespace std;

class Point{
	private:
		int x, y;
	public:
	Point(int x_val, int y_val) : x(x_val), y(y_val){
		cout<<"Point Constructor was Called."<<endl;
	}	
	
	Point operator + (const Point&other){
		return Point(this->x + other.x, this->y + other.y);
	}
	
	void print(){
		cout<<"Point("<<x<<", "<<y<<")"<<endl;
	}
};

int main(){
	Point p1(10, 5);
	Point p2(2, 4);
	
	Point p3 = p1 + p2;
	
	cout<<"P1: ";
	p1.print();
	
	cout<<"P2: ";
	p2.print();
	
	cout<<"P3: ";
	p3.print();
	
	return 0;
}
