#include<iostream>
#include<string>
using namespace std;

struct Book{
	string title;
	string author;
	string ISBN;
	bool isAvailable;
	
	void setup();
	void display();
	void checkOut();
	void checkIn();
};

void Book::setup(){
	isAvailable = true; 	
	cout<<"Enter the Title of the Book: ";
	getline(cin, title);
	cin.ignore();
	cout<<"Enter the Author's Name: ";
	getline(cin, author);
	cin.ignore();
	cout<<"Enter ISBN: ";
	cin>>ISBN; 
	cin.ignore();
	cout<<endl;
}

void Book::display(){
	cout<<"Title: "<<title<<endl;
	cout<<"Author: "<<author<<endl;
	cout<<"ISBN: "<<ISBN<<endl;
	
	if(isAvailable){
		cout<<"Status: Available."<<endl;
	}
	else{
		cout<<"Status: Checked Out."<<endl;
	}
}


void Book::checkOut(){
	if(isAvailable){
		isAvailable = false;
		cout<<"The Book is now Checked Out."<<endl;
	}
	else{
		cout<<"Unfortunately, the book is unavailable at the moment."<<endl;
	}
}

void Book::checkIn(){
	isAvailable = true;
	cout<<"The Book is Available now."<<endl;
}

int main(){
	bool decision;
	int n;
	Book kitab[3];
	
	for(int i = 0; i<3; i++){
		kitab[i].setup();
	}
	
	for(int i = 0; i<3; i++){
		kitab[i].display();
	}
	do{
	cout<<endl<<"Which book do you wish to borrow?";
	cin>>n;
	if(n>3){
		cout<<"Abey Saale."<<endl;
	}
}while(n>3);

kitab[n-1].checkOut();

cout<<"Would you like to return the Book: "<<endl;
cout<<"Press 1 for Yes, Press 0 for No."<<endl;
cin>>decision;

if(decision){
	kitab[n-1].checkIn();
	cout<<"Thank You for Returning it."<<endl;
}
else{
	cout<<"Abey Saale."<<endl;
}

for(int i = 0; i<3; i++){
	kitab[i].display();
}
}

