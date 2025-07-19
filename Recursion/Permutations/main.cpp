#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

void returN(vector<int>& a, vector<int>& ds, vector<vector<int>>& ans,
                int mpp[]) {
        if (ds.size() == a.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < a.size(); i++) {
            if (!mpp[i]){
                ds.push_back(a[i]);
            mpp[i] = 1;
            returN(a, ds, ans, mpp);
            ds.pop_back();
            mpp[i] = 0;
        }
    }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;
        returN(nums, ds, ans, freq);
        return ans;
    }




    // better approach


    void returN(vector<int>& a,int ind, vector<vector<int>>& ans) {
       vector<int> ds
        if(ind == a.size()) {
            for(int i=0; i<a.size(); i++){
              ds.push_bsck(a[i]);
            }
            ans.push_back(ds);
             return;
        }
      for(int i=ind; i<a.size(); i++){
        swap(a[ind],a[i]);
        returN(a,ind+1,ans);
        swap(a[ind],a[i]);

      }

    }
vector<vector<int>> permute(vector<int>& nums) {

        vector<int> ds;
        vector<vector<int>> ans;
        returN(nums,0, ans);
        return ans;
    }