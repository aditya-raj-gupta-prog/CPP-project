#include<iostream>
#include<string>
using namespace std;
class Course{
	private:
		string courseName;
		int credits;
		
	public:
		Course(string name = "None", int cred = 0){
			courseName = name;
			credits = cred;
		}
		
		void display() const{
			cout<<"Course Name: "<<courseName<<endl;
			cout<<"Credits: "<<credits<<endl;
		}
		
		string getName() const {
		return courseName;}
};

class Student{
	private:
		string studentName;
		int studentID;
		Course enrolledCourses[5];
		int courseCount;
		
	public:
	Student(string name, int id){
		studentName = name;
		studentID = id;
		courseCount = 0;
	}
	
	bool addCourse(const Course& c){
		if(courseCount<5){
			enrolledCourses[courseCount] = c;
			courseCount++;
			cout<<"Successfully Enrolled."<<endl;
			return true;
		
		}
		else{
			cout<<"Error: Cannot enroll in more courses"<<endl;
			return false;
		}
	}
	
	void displayTranscript() const{
	cout<<"Student: "<<studentName<<endl;
	cout<<"ID: "<<studentID<<endl;
	cout<<"Enrolled Courses: "<<endl;
	
	if(courseCount == 0){
		cout<<"No courses enrolled."<<endl;
	}
	else{
		for(int i = 0; i< courseCount; i++){
			enrolledCourses[i].display();
			cout<<endl;
		}
	}
	}	
};
int main(){
	cout<<"Creating Courses"<<endl;
	Course c1("Intro to Cpp", 3);
	Course c2("Data Structures", 4);
	Course c3("Linear Algebra", 3);
	cout<<"Creating Student"<<endl;
	Student s1("Aditya", 001);
	
	s1.addCourse(c1);
	s1.addCourse(c2);
	s1.addCourse(c3);
	
	Course c4("Calculus", 4);
	Course c5("Chemistry", 4);
	Course c6("Physics", 4);
	
	s1.addCourse(c4);
	s1.addCourse(c5);
	s1.addCourse(c6);
	
	cout<<"Displaying Transcripts: "<<endl;
	s1.displayTranscript();
	
	return 0; 
		
		
	
	
		
}
