#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int bruteforce(vector<int>&a){
int n=a.size();
int mEle=-1;
int cnt;

for(int i=0; i<n; i++){
    cnt=0;
    for(int j=0; j<n; j++){
        if(a[i]==a[j]){
            cnt++;
        }
    }
            if(cnt>n/2){
                    mEle=a[i];
                return mEle;
            }
}

return -1;
}


int better(vector<int>&a){
map<int,int>mpp;
for(int i=0; i<a.size(); i++){
    mpp[a[i]]++;
}

for(auto it: mpp){
    if(it.second>a.size()/2)
        return it.first;
}
return -1;
}

// Moore's Algorithm.

 int majorityElement(vector<int>& nums) {
         int el;
         int cnt=0;

         for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                cnt++;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
               else{
                     cnt--;
               }
         }

        int cnt1=0;
         for(int i=0; i<nums.size(); i++){
            if(el==nums[i]){
                cnt1++;
            }
         }
         return el;
    }
int main()
{
    vector<int>arr={1,2,3,4,3,3,2,3,3};
    cout<<better(arr);

    return 0;
}
