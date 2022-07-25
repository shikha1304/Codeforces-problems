#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

 bool check(string a, string b){
        unordered_set<char> s;
        for(int i=0; i<a.size(); i++)
            s.insert(a[i]);
        for(int i=0; i<b.size(); i++)
            s.insert(b[i]);
        
        if(s.size()== a.size()+1)
            return true;
        return false;
}

int main()
{

    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);

   string a = "hot";
   string b = "dot";

   cout<<check(a,b);
   return 0;

}