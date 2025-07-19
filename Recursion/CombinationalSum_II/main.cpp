/*Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void cSum(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int target){
if(target==0){
    ans.push_back(ds);
    return;
}
for(int i=index; i<nums.size(); i++){
    if(i>index && nums[i]==nums[i-1])continue;
    if(nums[i]>target)break;
    ds.push_back(nums[i]);
    cSum(i+1,nums,ds,ans,target-nums[i]);
    ds.pop_back();
}
}


vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        cSum(0, candidates, ds, ans, target);

        return ans;
    }