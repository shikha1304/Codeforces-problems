#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

	//freopen("input.txt", "r" , stdin);
	//freopen("output.txt", "w" , stdout);

	int n;
	cin>>n;
	int x[n], y[n], z[n], sum[3] = {0,0,0};
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i]>>z[i];
		sum[0] += x[i];
		sum[1] += y[i];
		sum[2] += z[i]; 
	}
	if( sum[0] == 0 && sum[1] == 0 && sum[2] == 0)
	cout<<"YES";
	else
		cout<<"NO";
	return 0;
}