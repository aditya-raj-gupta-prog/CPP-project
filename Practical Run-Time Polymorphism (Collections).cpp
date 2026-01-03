#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class MediaItem{
	protected:
	string title;
	public:
		MediaItem(string t){
			title = t;
		}
		
		virtual void displayDetails() = 0;
		
		virtual ~MediaItem(){};
};

class Book : public MediaItem{
	private:
		string author;
	public:
		Book(string t, string a) : MediaItem(t), author(a){
			cout<<"Book Constructor was Called."<<endl;
		}
		
		void displayDetails() override{
		cout<<"Book Title: "<<title<<endl;
		cout<<"Author: "<<author<<endl;
		}	
};

class Movie : public MediaItem{
	private:
		string director;
	public:
		Movie(string t, string d) : MediaItem(t), director(d){
			cout<<"Movie Constructor was Called."<<endl;
		}
		
		void displayDetails() override{
		cout<<"Movie Title: "<<title<<endl;
		cout<<"Director: "<<director<<endl;
		}
}; 

int main(){
	MediaItem *lib[2];
	
	lib[0] = new Movie("Pulp Fiction", "Quentin Tarantino");
	lib[1] = new Book("Harry Potter", "JK Rowling");
	
	for(int i = 0; i<2;i++){
		lib[i]->displayDetails();
	}
	
	for(int i = 0; i<2; i++){
		delete lib[i];
	}
	return 0;
	
}
