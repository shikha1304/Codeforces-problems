#include<iostream>
#include<queue>
using namespace std;

int main(){
	Tree* root;
	queue<Tree*> q;
	q.push(root);

	while(q.empty()==false){
		Tree* cur = q.front();
		q.pop();

		cout<<cur->val;
		if(cur->left != NULL)
			q.push(cur->left);

		if(cur->rightt != NULL)
			q.push(cur->right);
	}
}