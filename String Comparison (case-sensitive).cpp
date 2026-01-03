#include<iostream>
#include<string>
#include<algorithm> // For min() function
using namespace std;

int main(){
    string str1, str2;
    
    cout<<"Enter String 1: ";
    getline(cin, str1);
    
    cout<<"Enter String 2: ";
    getline(cin, str2);
    
    if (str1 == str2){
        cout<<"Both Strings are Same.";
    }
    else{
        cout<<"Strings are Unequal."<<endl;
        
        // Check length difference (whether lengths are different OR same)
        if(str1.length() != str2.length()){
            cout<<"Length Difference: "<<str1.length()<<" Vs "<<str2.length()<<endl;
        }
        
        // ALWAYS check for character differences when strings are unequal
        int minLength = min(str1.length(), str2.length());
        
        for (int i = 0; i < minLength; i++){
            if(str1[i] != str2[i]){
                cout<<"First Difference at position "<< i+1<< " : ";
                cout<<"'"<<str1[i]<<"'"<<" Vs "<<"'"<<str2[i]<<"'";
                break;
            }
        }
    }
    
    return 0;
}
