// Given an array of integers nums and an integer threshold, we will choose a positive integer divisor,
//divide all the array by it, and sum the division's result.
//Find the smallest divisor such that the result mentioned above is less than or equal to threshold.
// Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).
// The test cases are generated so that there will be an answer.


int possible(vector<int>&a,int div,int th){
        long long total=0;
        for(int i=0; i<a.size(); i++){
            total+=ceil(double(a[i])/div);
        }
        return total<=th;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=INT_MIN;
        for(int i=0; i<nums.size(); i++){
             high=max(high,nums[i]);
             }
             int low=1;
             int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(nums,mid,threshold)){
                 ans=mid;
                 high=mid-1;
            }
            else{
               low=mid+1;
            }
        }
        return ans;
    }