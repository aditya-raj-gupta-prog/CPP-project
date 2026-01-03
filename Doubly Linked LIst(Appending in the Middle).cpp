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
			
			void Middle(float val,int n){
				Node* nodePtr;
				Node* mid = new Node(val);
				nodePtr = head;
					for(int i = 0; i<n-1;i++){
						nodePtr = nodePtr->next;
					}
					Node*A = nodePtr->next;
					nodePtr->next = mid;
					mid->next = A;
					mid->prev = nodePtr;
					A->prev = mid;
			}
};

int main(){
	StringDll list;
	int c;
	int n;
	float input;
	do{
		cout<<"Press 0 to Quit, Press 1 to Append a Node"<<endl;
		cout<<"2 to Display Forward, 3 to Display Reverse, 4 to Append in Between the List"<<endl;
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
			case 4:{
				cout<<"Enter the Value that you would like to append in the Node:";
				cin>>input;
				cout<<"Enter the Index after which you want it to be appended: ";
				cin>>n;
				list.Middle(input,n);
				break;
			}
			default:
				cout<<"Invalid Input."<<endl;
				break;
		}
	}while(c!=0);
	
}
