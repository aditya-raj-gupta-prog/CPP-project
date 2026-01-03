#include<iostream>

using namespace std;

class Timer{
	private:
		int secondsRemaining;
		bool isRunning;
		
	public:
		void setup(int seconds){
			secondsRemaining += seconds;
			isRunning = false;
			
			if(seconds<0){
				secondsRemaining = 0;
			}
		}
		
		void start(){
			if(!isRunning){
				isRunning = true;
				cout<<"Timer has Started."<<endl;
			}
			else if(isRunning){
				cout<<"Error: Timer is already running."<<endl;
			}
		}
		
		void stop(){
			if(isRunning){
				isRunning = false;
				cout<<"Timer Stopped"<<endl;
			}
			else {
				cout<<"Timer is already stopped."<<endl;
			}
		}
		
		void tick(){
			if(isRunning){
				if(secondsRemaining>0){
						secondsRemaining = secondsRemaining - 1;
				}
				else if(secondsRemaining = 0){
					isRunning = false;
					cout<<"Time's Up";
				}
			}
		}
		
		void displayTime(){
			cout<<"Remaining Time: "<<secondsRemaining<<endl;
		}	
};
int main(){
	
	Timer myTim;
	
	myTim.setup(5);
	myTim.start();
	myTim.start();
	
	for(int i = 0; i<7; i++){
		myTim.tick();
		myTim.displayTime();
	}
	myTim.stop();
	
	
}
