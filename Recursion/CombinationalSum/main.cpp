#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void cSum(int index,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans,int target,int size){
if(index==size){
    if(target==0){
        ans.push_back(ds);
    }
    return;
}

ds.push_back(nums[index]);
cSum(index,nums,ds,ans,target-nums[index],size);
ds.pop_back();
cSum(index+1,nums,ds,ans,target,size);
}


vector<vector<int>> combinationalSum(vector<int>&nums,int target){
    vector<int>ds;
    vector<vector<int>>ans;
    cSum(0,nums,ds,ans,target,nums.size());
    return ans;

}

/*
int main(){
    vector<int>arr={5,7,9,2,4,6,1};
    int target=8;
    vector<vector<int>>res;
    res=combinationalSum(arr,target);
    for(int i=0; i<res.size(); i++){
        for(int j=0; j<res[0].size(); j++){
            cout<<res[i][j];
        }
    }
    return 0;    
}
*/