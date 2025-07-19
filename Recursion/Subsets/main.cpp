/*Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void res(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        if(index==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[index]);
        res(index+1,nums,ds,ans);
        ds.pop_back();
        res(index+1,nums,ds,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        res(0,nums,ds,ans);
        return ans;
        
    }