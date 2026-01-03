#include<iostream>

using namespace std;

struct color{
	int r;
	int g;
	int b;
	
	void inputColor();
	void display();
	void invert();
	void toGrayScale();
};

void color::inputColor(){
	do{
		cout<<"Enter Red Value(0-255): ";
		cin>>r;
		if(r<0 || r>255){
			cout<<"Invalid input. Please enter a value between 0 and 255."<<endl;
		}
	} while(r<0 || r>255);
	
	do {
		cout<<"Enter Green Value(0-255): ";
		cin>>g;
		if(g<0 || g>255){
			cout<<"Invalid input. Please enter a value between 0  and 255."<<endl;
		}
	} while(g<0 || g>255);
	
	do {
		cout<<"Enter Blue Value(0-255): ";
		cin>>b;
		if(b<0 || b>255){
		 cout<<"Invalid input. Please enter a value between 0  and 255."<<endl;
		}
	} while(b<0 || b>255);
}

void color::display(){
	cout<<"Color is: RGB("<<r<<", "<<g<<", "<<b<<")"<<endl;
}

void color::invert(){
	r = 255-r;
	g = 255-g;
	b = 255-b;
}

void color::toGrayScale(){
	int grayScale = (r+g+b)/3;
	r = grayScale;
	g = grayScale;
	b = grayScale;
}

int main(){
	color myColor;
	cout<<"Create Color: "<<endl;
	myColor.inputColor();
	cout<<endl<<"Original Color: "<<endl;
	myColor.display();
	cout<<endl<<"Inverted Color: "<<endl;
	myColor.invert();
	myColor.display();
	cout<<endl<<"Converting to Gray Scale: "<<endl;
	myColor.toGrayScale();
	myColor.display();
	
	return 0;
}
