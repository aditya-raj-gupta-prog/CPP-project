#include<iostream>
#include<string>
using namespace std;
int main(){
    cout<<"Enter a sentence: ";
    string sentence;    getline(cin, sentence);
    cout<<"Enter tghe target word: ";
    string target;    cin>>target;  
    int count = 0;
    size_t pos = sentence.find(target, 0);
    while(pos != string::npos){
        count++;
        pos = sentence.find(target, pos + 1);
    }
    cout<<"The word \""<<target<<"\" appears "<<count<<" times in the sentence."<<endl;
    if (sentence.size() >= 6) { // Defensive check to avoid out-of-bounds errors
        string sub = sentence.substr(2, 4);
        cout << "Extracted substring (4 chars from index 2): \"" << sub << "\"" << endl;
    } else {
        cout << "Sentence is too short to extract a 4-character substring from index 2." << endl;
    }
    return 0;
}