#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;

int i=0;
int maxcuts(int n, int a, int b, int c) 
{
    if(n<0)
        return -1;
    if(n==0)
        return 0;
    int res = max(maxcuts(n-a, a,b,c), (max(maxcuts(n-b,a,b,c), maxcuts(n-c,a,b,c))));
    if(res==-1)
        return -1;
    return (res+1);
}
int main()
{

	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

    cout<<"Enter a number:";
    int n;
    cin>>n;
    cout<<"Enter the three different cut values: ";
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"\nThe maximum no. of cuts possible: "<<maxcuts(n,a,b,c);
	return 0;
}
