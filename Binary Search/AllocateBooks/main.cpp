// Given an array ‘arr’ of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book.
// There are ‘m’ number of students, and the task is to allocate all the books to the students.
// Allocate books in such a way that:
// 1. Each student gets at least one book.
// 2. Each book should be allocated to only one student.
// 3. Book allocation should be in a contiguous manner.
// You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum.
// If the allocation of books is not possible, return -1.

int numberofpages(vector<int>&nums,int mid){
    int std=1,pages=0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i]+pages<=mid){
            pages+=nums[i];
        }
        else{
            std++;
            pages=nums[i];
        }
    }
    return std;
}

int findPages(vector<int>& arr, int n, int m) {

    if(m>n)return -1;
     int low=INT_MIN;
     int high=0;
     for(int i=0; i<n; i++){
         low=max(arr[i],low);
         high+=arr[i];
     }
     while(low<=high){
         int mid=(low+high)/2;
         if(numberofpages(arr,mid)<=m){
             high=mid-1;
         }
         else{
             low=mid+1;
         }
     }
     return low;
}