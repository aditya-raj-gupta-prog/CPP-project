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
			bool searchValue(float);
			void modifyValue(float, float);
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
		nodePtr->next =newNode;
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

bool FloatList :: searchValue(float num){
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
void FloatList :: modifyValue(float old, float n){
	ListNode *nodePtr;
	nodePtr = head;
	while(nodePtr){
		if(nodePtr->value == old){
			nodePtr->value = n;
		}
		nodePtr = nodePtr->next;
	}
}	
int main(){
	FloatList list;
	float search;
	float replace;
	
	list.appendNode(7.9);
	list.appendNode(8.3);
	list.appendNode(12.5);
	
	cout<<"Here is the List"<<endl;
	list.displayList();
	cout<<"Enter the Value you are Searching for: ";
	cin>>search;
	cout<<"Enter the Value you wish to replace it with: ";
	cin>>replace;
	if(list.searchValue(search)){
		list.modifyValue(search, replace);
		cout<<"Success: The Value "<<search<<" was replaced by "<<replace<<endl;
	}
	else{
		cout<<"Failed "<<search<<" was not found."<<endl;
	}
	list.displayList();
	
	return 0;
	
}
