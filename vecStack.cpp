#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct vecStack{
	vector<int> v;

	void push(int x){
		v.push_back(x);
	}

	int pop(){
		if(v.empty())
			return -1;
		int res = v.back();
		v.pop_back();
		return res;
	}

	int peek(){
		return v.back();
	}

	int size(){
		return v.size();
	}

	int isEmpty(){
		return (v.empty());
	}
};

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	vecStack v;
	v.push(25);
	v.push(30);
	v.push(35);
	v.push(39);
	while(!v.isEmpty()){
		cout<<v.size()<<"\n";
		cout<<v.peek()<<"\n";
		v.pop();
	}
	return 0;
}