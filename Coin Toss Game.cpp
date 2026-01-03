#include<iostream>
#include<cmath>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	int toss, heads = 0;
	char ans;
	
	do{
	cout<<"Enter Number of Coin tosses: ";
	cin>>toss;
	
	for(int i = 0; i < toss; i++){
		if(rand() %2 == 0){
			heads++;
		}
		
	}
	
	int tails = toss - heads;
	tails>=0;
	cout<<"Results: "<<endl;
	cout<<"Heads: "<<heads<<endl;
	cout<<"Tails: "<<tails<<endl;
	
	if(tails > heads){
		cout<<"You Lose."<<endl;
	}
	else if(heads > tails){
		cout<<"You Win."<<endl;
	}
	else{
		cout<<"Its a Draw."<<endl;
	}
	
	cout<<"Do you want to play again?: Press 'y' to continue or press any other key to exit\n";
	cin>>ans;
	
	ans = toupper(ans);
}
while(ans == 'Y');
	
}
