#include<iostream>
#include<fstream>
#include<string>
#include <iomanip>
#define DEBUG
using namespace std;   
int main(){
    #ifdef  DEBUG   
    cout << "[DEBUG] Gradebook file initialization started..." << endl;
    #endif
    ofstream fout;
    fout.open("gradebook.txt");

    string name;
    long long int  rollNumber;
    
    cout<<"Enter data of 3 students (Name and Roll Number): "<<endl;        
    for(int i=0; i<3; i++){
        cout<<"Student "<<i+1<<": "<<endl;
        cin>>name;
        cout<<endl;
        cin>>rollNumber;
        fout<<setw(20)<<name<<setw(20)<<rollNumber<<endl;
    }
    fout.close();
    cout<<"Data has been written to gradebook.txt successfully."<<endl;
}