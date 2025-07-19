// A peak element in a 2D grid is an element that is strictly greater than all of its adjacent neighbors to the left, right, top, and bottom.
// Given a 0-indexed m x n matrix mat where no two adjacent cells are equal, find any peak element mat[i][j] and return the length 2 array [i,j].
// You may assume that the entire matrix is surrounded by an outer perimeter with the value -1 in each cell.
// You must write an algorithm that runs in O(m log(n)) or O(n log(m)) time.

int findMax(vector<vector<int>>&nums,int m,int n,int mid){
        int maxi=INT_MIN;
        int ind=-1;
        for(int i=0; i<m; i++){
            if(nums[i][mid]>maxi){
                maxi=nums[i][mid];
                ind=i;
            }
        }
        return ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=findMax(mat,m,n,mid);
            int left=mid-1 >=0 ?  mat[row][mid-1] : -1;
            int right=mid+1<n ? mat[row][mid+1] : -1;
            if(mat[row][mid]>left && mat[row][mid]>right)return {row,mid};
            else if(mat[row][mid]<left)high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }