#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>optimal(vector<int>&nums){
vector<int>ans;
int maxi=INT_MIN;

for(int i=nums.size()-1; i>=0; i--){
    if(nums[i]>maxi){
        ans.push_back(nums[i]);

    }
    maxi=max(maxi,nums[i]);
}
return ans;
}

int main()
{
    vector<int>a={1,4,22,6,4,5};
   vector<int>b = optimal(a);
   for(auto it:b){
    cout<<it<<"  ";
   }

     return 0;
}
