#include<iostream>
using namespace std;

struct LinkStack{
	int cap;
	node *head;
	int top;
	int curr;

	LinkStack(int c){
		cap = c;
		top = -1;
		int curr = head;
		curr -> NULL;
	}

	void push(int x){
		if(top == cap-1)
			cout<<"Stack Overflow";
		else{
		top++;
		head = x;
		head -> next = NULL;
	}
}