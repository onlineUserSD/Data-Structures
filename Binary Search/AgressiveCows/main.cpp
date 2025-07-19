// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls.
// The stalls are located along a straight line at positions x1 ... xN (0 <= xi <= 1,000,000,000).
// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall.
// To prevent the cows from hurting each other,
//  FJ wants to assign the cows to the stalls,
// such that the minimum distance between any two of them is as large as possible.
// What is the largest minimum distance?


int possible(vector<int>&nums,int dist,int k){
int c=1;
int place=nums[0];
for(int i=1; i<nums.size(); i++){
    if((nums[i]-place>=dist)){
        c++;
        place=nums[i];
    }
     
}

if(c>=k)return true;
return  false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size();
    int low=1;
    int high=stalls[n-1]-stalls[0];
     
    while(low<=high){
        int mid=(low+high)/2;
        if(possible(stalls,mid,k)){
             
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}