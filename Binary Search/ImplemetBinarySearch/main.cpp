
#include<iostream>
#include<bits/stdc++.h>
using namespace std


int search(vector<int>& nums, int target){
        int low=0;
        int n=nums.size();
        int high=n-1;

        for(int i=0; i<n; i++){
            int mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target){
                low=mid+1;
            }
            else if(nums[mid]>target)high=mid-1;
        }

        return -1;
    }

    int main(){
        
        return 0;
    }