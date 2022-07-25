#include<iostream>
using namespace std;

struct Mystack{
	int cap;
	int *arr;
	int top;

	Mystack(int c){
		cap = c;
		arr = new int[cap];
		top = -1;
	}

	void push(int x){
		if ( top == cap-1)
			cout<<"Stack Overflow\n";
		else{
		top++;
		arr[top] = x;
		}
	}

	int peek(){
		return arr[top];
	}

	int pop(){
		if(top == -1){
			cout<<"Stack Underflow";
			return -1;
		}
		top--;
		return arr[top+1];
	}

	int size(){
		return top+1;
	}

	bool isEmpty(){
		return (top == -1);
	}
};

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cout<<"Enter the capacity of the required stack\n";
	cin>>n;
	Mystack s(n);
	cout<<s.size()<<endl;
	s.push(20);
	cout<<s.size()<<endl;
	s.push(30);
	cout<<s.size()<<endl;
	s.push(40);
	cout<<s.size()<<endl;
	s.push(50);
	cout<<s.size()<<endl;
	while(!s.isEmpty()){
		cout<<s.peek()<<"\n";
		s.pop();
	}
	s.pop();
	return 0;
}