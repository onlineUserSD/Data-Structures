#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void better(vector<int>&arr){
int cnt1=0,cnt0=0,cnt2=0;


for(int i=0; i<arr.size(); i++){

     if(arr[i]==0 ){
        cnt0++;
     }
     else if(arr[i]==1){
        cnt1++;
     }
     else{
        cnt2++;
     }

}

for(int i=0; i<cnt0; i++) arr[i]=0;
for(int i=cnt0; i<cnt0+cnt1; i++)arr[i]=1;
for(int i=cnt0+cnt1; i<arr.size(); i++)arr[i]=2;


     for(auto it: arr){
        cout<<it<<" ";
     }


}

// Optimal is based on Dutch national Flag Algorithm(DNF).
void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int n=nums.size();
        int high=n-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
         else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[high],nums[mid]);
            high--;
        }
        }

    }

int main()
{
     vector<int>arr={1,1,0,0,2,1,0,2,1};
     better(arr);
    return 0;
}
