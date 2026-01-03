#include<iostream>
#include<string>
using namespace std;
struct EmpNode{
	int ID;
	string name;
	float salary;
	EmpNode* next;
	
	EmpNode(int i, string n, float s){
		ID = i;
		salary = s;
		name = n;
		next = NULL;
	}
};
class List{
	private:
		EmpNode* head;
		public:
			List(){
				head = NULL;
			}
			void appendNode(int i ,string n, float s){
				EmpNode* nodePtr;
				EmpNode* newNode = new EmpNode(i, n, s);
				if(head == NULL){
					head = newNode;
				}
				else{
					nodePtr = head;
					while(nodePtr->next){
						nodePtr = nodePtr->next;
					}
					nodePtr->next = newNode;
				}
				cout<<"Node was Appended."<<endl;
			}
			
			void display(){
				EmpNode* nodePtr; 
				nodePtr = head;
				while(nodePtr){
					cout<<"ID: "<<nodePtr->ID<<endl;
					cout<<"Name: "<<nodePtr->name<<endl;
					cout<<"Salary: "<<nodePtr->salary<<endl;
					nodePtr = nodePtr->next;
				}
				if(!nodePtr){
					cout<<"List is Empty."<<endl;
					return;
				}
		}
		
		void deleteNode(int i){
			EmpNode* nodePtr;
			EmpNode* prevNode;
			nodePtr = head;
			if(!head){
				cout<<"List is Empty."<<endl;
			}
				if(head->ID == i){
					head = head->next;
					delete nodePtr;
					cout<<"The Node was Deleted Successfully."<<endl;
					return;
			}
			while(nodePtr !=NULL && nodePtr->ID != i){
				prevNode = nodePtr;
				nodePtr = nodePtr->next;
			}
			if(nodePtr){
				prevNode->next = nodePtr->next;
				delete nodePtr;
				cout<<"Node was Deleted."<<endl;
			}
			else{
				cout<<"ID was not Found."<<endl;
			}
		}
		
		void fromMiddle(int k){
			if(!head){
				cout<<"List is Empty"<<endl;
				return;
			}
			int length = 0;
			EmpNode* nodePtr = head;
			while(nodePtr){
					length++;
					nodePtr = nodePtr->next;
			}
			int midIndex = length/2;
			int target = midIndex - k -1;
			if(target<0){
				cout<<"Invalid Index."<<endl;
				return;
			}
			nodePtr = head;
			for(int i = 0; i<target;i++){
				nodePtr = nodePtr->next;
			}
			cout<<"Node was Found."<<endl;
			cout<<"ID: "<<nodePtr->ID<<endl;
			cout<<"Name: "<<nodePtr->name<<endl;
			cout<<"Salary: "<<nodePtr->salary<<endl;		
	}
		};
		
int main(){
	List Lund;
	string n;
	int i ;
	int c;
	float s;
	int ind;
	do{
		cout<<"Press 0 to Quit, Press 1 to Display List"<<endl;
		cout<<"2 to Append a Node, 3 to Delete a Node, 4 to Display from Middle of the List."<<endl;
		cin>>c;
		switch(c){
			case 0: return 0;
			case 1: Lund.display(); break;
			case 2: {
				cout<<"Enter the ID: "<<endl;
				cin>>i;
				cin.ignore();
				cout<<"Enter the Name: "<<endl;
				getline(cin, n);
				cout<<"Enter the Salary: "<<endl;
				cin>>s;
				Lund.appendNode(i,n,s);
				break;
			}
			case 3:{
				cout<<"Which Employee do you want to delete?: "<<endl;
				cin>>i;
				Lund.deleteNode(i);
				break;
			}
			case 4: {
				cout<<"Enter the Index from the Left(Transversing towards the Head): "<<endl;
				cin>>ind;
				Lund.fromMiddle(ind);
				break;
			}
			default:
				cout<<"Invalid Input."<<endl;
				break;
		}
	}while(c != 0);
}		
