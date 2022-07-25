#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> nums1 = {3};
	vector<int> nums2 = {-1,-2};
	 vector<int> a;
        for(int i=0; i<nums1.size(); i++){
            int j=0;
            while(j<nums2.size()){
                if(nums2[j]<nums1[i]){
                    a.push_back(nums2[j]);
                    nums2.erase(nums2.begin()+j);
                }
                else
                	j++;
            }
            a.push_back(nums1[i]);
        }
        if(!nums2.empty()){
            for(int i=0; i<nums2.size(); i++)
                a.push_back(nums2[i]);
        }
    for (int i=0; i<a.size(); i++)
    	cout<<a[i]<<" ";
}