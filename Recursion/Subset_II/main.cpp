/*Given an integer array nums that may contain duplicates, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/
 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void cSum(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
    ans.push_back(ds);
    for(int i=index; i<nums.size(); i++){
        if(i!=index && nums[i]==nums[i-1])continue;
        ds.push_back(nums[i]);
        cSum(i+1,nums,ds,ans);
        ds.pop_back();
    }
}

vector<vector<int>>subsets(vector<int>&nums){
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    vector<int>ds;
    cSum(0,nums,ds,ans);
    return ans;
}


 