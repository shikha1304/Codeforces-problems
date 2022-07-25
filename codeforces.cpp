#include<bits/stdc++.h>
using namespace std;

int main(){

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0; i<n; i++){
		cin>>s[i];
	}
	bool done = 0;
	for(int j=0; j<n; j++){
		for(int i=0; i<5; i++){
			if((s[j][i] == 'O') &&  (s[j][i+1] == 'O')){
				s[j][i] = '+';
				s[j][i+1] = '+';
				done = 1;
			}
			if(done==1)
				break;
		}
		if(done==1)
				break;
	}
	if(done==1){
		cout<<"YES"<<"\n";
		for(int i=0; i<n; i++)
			cout<<s[i]<<"\n";
	}
	else
		cout<<"NO";

	return 0;
}