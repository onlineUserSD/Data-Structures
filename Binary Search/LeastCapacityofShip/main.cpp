// A conveyor belt has packages that must be shipped from one port to another within days days.
// The ith package on the conveyor belt has a weight of weights[i].
//  Each day, we load the ship with packages on the conveyor belt (in the order given by weights). 
//  We may not load more weight than the maximum weight capacity of the ship.
// Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days.

int daysreq(vector<int>&nums,int cap){
        int load=0;
       int days=1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]+load>cap){
                load=nums[i];
                days+=1;
            }
            else{
                load+=nums[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN;
        int high=0;
        for(int i=0; i<weights.size(); i++){
            low=max(low,weights[i]);
            high+=weights[i];
        }
        while(low<=high){
            int mid=(low+high)/2;
            int req=daysreq(weights,mid);
            if(req<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }