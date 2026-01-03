#include<iostream>
#include<string>

using namespace std;

struct Node{
	float data;
	Node* prev;
	Node* next;
	Node(float d){
		data = d;
		next = NULL;
		prev = NULL;
	}
};

class StringDll{
	private:
		Node* head;
		public:
			StringDll(){
				head = NULL;
			}
			void appendNode(float val){
				Node* nodePtr;
				Node* newNode = new Node(val);
				if(head == NULL){
					head = newNode;
				}
				else{
					nodePtr = head;
					while(nodePtr->next){
						nodePtr = nodePtr->next;
					}
					nodePtr->next = newNode;
					newNode->prev = nodePtr;
				}
			}
			void displayReverse(){
				
				Node* nodePtr = head;
				if(!head){
					cout<<"The List is Empty."<<endl;
					return;
				}
				else{
				while(nodePtr->next){
					nodePtr = nodePtr->next;
				}
				while(nodePtr){
					cout<<nodePtr->data<<"<->";
					nodePtr = nodePtr->prev;
				}
				cout<<"NULL"<<endl;
			}
		}
			void displayForward(){
				Node* nodePtr;
				nodePtr = head; 
				if(!head){
					cout<<"List is Empty."<<endl;
					return;
				}
				else{
					while(nodePtr){
						cout<<nodePtr->data<<"<->";
						nodePtr = nodePtr->next;
					}
					cout<<"NULL";
					
				}
			}
};

int main(){
	StringDll list;
	int c;
	float input;
	do{
		cout<<"Press 0 to Quit, Press 1 to Append a Node"<<endl;
		cout<<"2 to Display Forward, 3 to Display Reverse."<<endl;
		cin>>c;
		switch(c){
			case 0: return 0;break;
			case 1:{
				cout<<"Enter the Input: ";
				cin>>input;
				list.appendNode(input);
				break;
			}
			case 2:{
				list.displayForward();
				break;
			}
			case 3:{
				list.displayReverse();
				break;
			}
			default:
				cout<<"Invalid Input."<<endl;
				break;
		}
	}while(c!=0);
	
}
