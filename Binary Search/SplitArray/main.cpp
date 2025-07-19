// Given an integer array nums and an integer k,
// split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.

// Return the minimized largest sum of the split.

// A subarray is a contiguous part of the array.
class Solution {
public:
    int split(vector<int>&arr,int lt){
        long int sum=0;
        int spl=1;
        for(int i=0; i<arr.size(); i++){
            if(sum+arr[i]<=lt){
                sum+=arr[i];
            }
            else{
                spl++;
                sum=arr[i];
            }
        }
        return spl;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>nums.size())return -1;
        int low=INT_MIN;
        int high=0;
        for(int i=0; i<nums.size(); i++){
            high+=nums[i];
            low=max(low,nums[i]);
        }

        while(low<=high){
            int mid=(low+high)/2;
            if(split(nums,mid)<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};