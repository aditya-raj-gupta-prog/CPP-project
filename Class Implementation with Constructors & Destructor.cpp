#include<iostream>

using namespace std;
class Book{
	private:
		string title;
		string author;
		bool isAvailable;
		
	public:
	Book(){
		title = "unknown";
		author = "unknown";
		isAvailable = false;
		cout<<"Default Book is created."<<endl;
	}	
	Book(string t, string a){
		isAvailable = true;
		title = t;
		author = a;
		cout<<"Book "<<title<<" is created."<<endl;
	}
	~Book(){
		cout<<"Book "<<title<<" is destroyed."<<endl;
	}
	
	void borrowBook(){
		if(isAvailable){
			cout<<"Book is now borrowed."<<endl;
		}
		cout<<"Error: Bakchodi Mat Kar."<<endl;
	}
	
	void returnBook(){
		isAvailable = true;
	}
	void display(){
		cout<<"Title: "<<title<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Availability: "<<(isAvailable ? "Yes":"No")<<endl;	
	}
};
int main(){
	Book b1;
	Book b2("Hairy Puttar aur Uski Ma ka Bhosda", "Jk Lowda");
	b1.display();
	b2.display();
	
	b1.borrowBook();
	b2.borrowBook();
	return 0;
}
