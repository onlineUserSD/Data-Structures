// You are given an integer array bloomDay, an integer m and an integer k.
// You want to make m bouquets. To make a bouquet, you need to use k adjacent flowers from the garden.
// The garden consists of n flowers, the ith flower will bloom in the bloomDay[i] and then can be used in exactly one bouquet.
// Return the minimum number of days you need to wait to be able to make m bouquets from the garden. If it is impossible to make m bouquets return -1.

int possible(vector<int>&nums,int day,int m,int k){
      int cnt=0;
      int bq=0;
      for(int i=0; i<nums.size(); i++){
        if(nums[i]<=day){
            cnt++;
        }
        else{
            bq+=cnt/k;
            cnt=0;
        }
      }
      bq+=cnt/k;
      if(bq>=m)return true;
      return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int val= m * 1LL * k * 1LL;
        if(bloomDay.size()<val)return -1;
        int low=INT_MAX;
        int high=INT_MIN;
        for(int i=0; i<bloomDay.size(); i++){
           low=min(low,bloomDay[i]);
           high=max(high,bloomDay[i]);
        }

        while(low<=high){
            int mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
       return low;
    }