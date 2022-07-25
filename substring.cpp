#include<bits/stdc++.h>
#include<algorithm>
typedef long long ll;
using namespace std;

int i=-1;
string s=(" ");
void subsets(string str, int n) 
{
    if(i<n){
        s.append(str,i+1);
        subsets(str, n);
    }
    else
    { 
        for (int j=0; j<=n; j++)
            cout<<s[j]<<" ";
        return;
    }
}
int main()
{

	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

    cout<<"Enter a string:";
    string str;
    cin>>str;
    cout<<"All the subsets of the given string are: \n";
    int n=(str.length()-1);
    subsets(str,n);
	return 0;
}
