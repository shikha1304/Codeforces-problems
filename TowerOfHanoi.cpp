#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;

void TOH(int n, char a, char b, char c)
{
    if(n==1){
        cout<<"Move 1 from "<<a<<" to "<<c<<"\n";
        return;
    }
    TOH(n-1,a,c,b);
    cout<<"Move "<<n<<" from "<<a<<" to "<<c<<"\n";
    TOH(n-1,b,a,c);
}
int main()
{

	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

    int n;
    cin>>n;
    char a,b,c;
    cin>>a>>b>>c;
    TOH(n,a,b,c);
	return 0;
}
