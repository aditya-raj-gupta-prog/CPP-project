#include<iostream>
#include<string>

using namespace std;

class FloatList{
	private:
		struct ListNode{
			float value;
		    ListNode *next;
		};
		
		ListNode *head;
		
		public:
			FloatList(){
				head = NULL;
			}
			~FloatList();
			void appendNode(float);
			void displayList();
			bool searchNode(float);
};

void FloatList :: appendNode(float num){
	ListNode *newNode, *nodePtr;
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = NULL;
	if(!head){
		head = newNode;
	}
	else{
		nodePtr = head;
		while(nodePtr->next){
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}
}
void FloatList :: displayList(){
	ListNode *nodePtr;
	nodePtr = head;
	while(nodePtr){
		cout<<nodePtr->value<<endl;
		nodePtr = nodePtr->next;
	}
}
FloatList :: ~FloatList(){
	ListNode *nodePtr, *nextNode;
	nodePtr = head;
	while(nodePtr != NULL){
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}
bool FloatList :: searchNode(float num){
	ListNode *nodePtr;
	nodePtr = head;
	while(nodePtr){
		if(nodePtr->value == num){
			return true;	
		}
		nodePtr = nodePtr->next;
	}
	return false;
}

int main(){
	FloatList list;
	float search;
	list.appendNode(2.5);
	list.appendNode(7.9);
	list.appendNode(12.6);
	
	cout<<"Here is the List: "<<endl;
	list.displayList();
	
	cout<<"Enter the Value you are searching for : ";
	cin>>search;
	if(list.searchNode(search)){
		cout<<"Success: Found "<<search<<" in the list."<<endl;
	}
	else{
		cout<<"Failed: "<<search<<" was not found."<<endl;
	}
	
	return 0;
}
