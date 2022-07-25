#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

	freopen("input.txt", "r" , stdin);
	freopen("output.txt", "w" , stdout);

	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	if((n%2)!=0)
    	{
    		for(int i=1; i<=n; i++)
    			{
    				for(int j=1; i<=n; i++)
    				{
    					if(i==j && i!=1 && i!=n)
    						cout<<"Q";
    					else
    						cout<<".";
    				}
    				cout<<"\n";
    			}	
    	}
    	else
    	{
    		for(int i=1; i<=n; i++)
    			{
    				for(int j=1; i<=n; i++)
    				{
    					if((i==j && i!=1 && i!=n) || (i==1 && j==n))
    						cout<<"Q";
    					else
    						cout<<".";
    				}
    				cout<<"\n";
    			}	
    	}
    }
	return 0;
}