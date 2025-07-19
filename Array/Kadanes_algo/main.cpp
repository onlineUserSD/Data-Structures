#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Find the subarray with maximum sum.

int brutebetter(vector<int>&a){
int sum=0;
int ans=0;

for(int i=0; i<a.size(); i++){
    sum=0;
    for(int j=i; j<a.size(); j++){
        sum+=a[j];
            ans=max(sum,ans);
    }
}


return ans;
}

// THIS IS KADANE'S ALGORITHM.
int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT_MIN;

        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum>maxi){
                maxi=sum;
            }

            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
int main()
{  vector<int>a={-1,8,-2,-4,-1,0,2,4};

    cout << brutebetter(a);
    return 0;
}
