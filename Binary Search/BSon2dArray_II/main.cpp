// Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.
 
 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=n-1;
        while(low<m && high>=0){
            if(matrix[low][high]==target)return true;
            else if(matrix[low][high]<target)low++;
            else high--;
        }
        return false;
    }
};