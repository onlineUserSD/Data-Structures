#include <iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int index=-1;
        int n=nums.size();

        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }

        }
        if(index==-1){
            reverse(nums,0,n-1);
        }
        else{
            for(int i=n-1; i>=0; i--){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;

                }
            }
            reverse(nums,index+1,n-1);
        }


    }

    public:
    void reverse(vector<int>&a,int start,int end){
        while(start<=end){
            swap(a[start],a[end]);
            start++;
            end--;
        }
    }
};

int main()
{
     return 0;
}
