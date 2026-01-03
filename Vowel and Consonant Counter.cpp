#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    int vowels = 0, consonants = 0;
    
    cout<<"Enter a string: ";
    getline(cin, input);
    
    int n = input.size();
    
    for(int i = 0; i < n; i++) {  // Fixed: semicolons instead of commas
        char c = input[i]; 
        
        // Check for vowels (add single quotes around letters)
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowels++;
        }
        // Check for consonants (letters that are NOT vowels)
        else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
    }
    
    cout<<"Number of Vowels: "<<vowels<<endl;
    cout<<"Number of Consonants: "<<consonants<<endl;
    
    return 0;  // Added return statement
}
