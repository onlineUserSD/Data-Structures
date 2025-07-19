// You have been given a non-empty grid ‘mat’ with 'n' rows and 'm' columns consisting of only 0s and 1s. 
// All the rows are sorted in ascending order.
// Your task is to find the index of the row with the maximum number of ones.
// Note: If two rows have the same number of ones, consider the one with a smaller index. If there's no row with at least 1 zero, return -1.



int lowerBound(vector<int>&nums,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
     int cntmax=0;
     int ind=-1;
     for(int i=0; i<n; i++){
         int cntones=m-lowerBound(matrix[i],m,1);
         if(cntones>cntmax){
             cntmax=cntones;
             ind=i;
         }
     }
     return ind;
}