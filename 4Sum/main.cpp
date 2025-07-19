#include <iostream>
#include<bits/stdc++.h>
using namespace std;

  // Brute force

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n=nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                for(int k=j+1; k<n; k++){
                    for(int l=k+1; l<n; l++){
                        if(nums[i]+nums[j]+nums[k]+nums[l]==target){
                            vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                            sort(temp.begin(),temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        vector<vector<int>>ans{st.begin(),st.end()};
        return ans;

    }


    // Better Solution

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        int n=nums.size();


        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
            set<int>hashset;
                for(int k=j+1; k<n; k++){
                    long long sum=nums[i]+nums[j]+nums[k];
                    int fourth=target-sum;
                    if(hashset.find(fourth)!=hashset.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],fourth};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    else{
                        hashset.insert(nums[k]);
                    }


                }
            }
        }
        vector<vector<int>>ans{st.begin(),st.end()};
        return ans;

    }



     // Optimal Solution

    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
              for(int j=i+1; j<n; j++){
                if(j>i+1 && nums[j]==nums[j-1])continue;
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum==target){
                        vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])k++;
                        while(k<l && nums[l]==nums[l+1])l--;
                    }
                    else if(sum>target) l--;
                    else k++;
                }
              }

        }
        return ans;

    }


int main()
{

    return 0;
}
