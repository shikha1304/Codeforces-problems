#include<bits/stdc++.h>
using namespace std;

class Node{
	public: 
		int data;
		Node* next;
};

void addFront(int n, Node* head){

	//Creating a new node
	Node* curr = NULL;	
	curr = new Node();

	//Copying the data of the head node in the new node
	curr->data = head-> data;
	curr->next = head-> next;			//Adding a node at the front

	//Inserting the new data in the head node
	head->data = n;
	head->next = curr;
}

void display(Node* curr){
	cout<<curr->data<<"\n";
	if(curr->next != NULL)			//traversal of a linked list
		display(curr->next);
}

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	//Making a linked list
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;

	//Adding a node at the front
	int add; cin>>add;
	addFront(add, head);

	addNode()

	//display
	display( head );

	return 0;
}