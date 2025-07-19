// Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

// Return the kth positive integer that is missing from this array.

int findKthmissing(vector<int>&nums,int k){
    int low=0; 
    int high=nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        int missing=nums[mid]-mid+1;
        if(missing<k)low=mid+1;
        else high=mid+1;
    }
    return high+1+k;
}