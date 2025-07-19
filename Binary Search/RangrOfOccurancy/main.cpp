#include<iostream>
#include<bits/stdc++.h>
using namespace std

// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

class Solution {
public:
    int lB(vector<int>&nums,int target,int n){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    } 

    int uB(vector<int>&nums,int target,int n){
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }   
  

    vector<int> searchRange(vector<int>& nums, int target) {
       // if(nums.empty())return {-1,-1};
         int lb=lB(nums,target,nums.size());
         if(lb==nums.size() || nums[lb]!=target)return {-1,-1};
         int ub=uB(nums,target,nums.size());
         return {lb,ub-1};
    }
};

 