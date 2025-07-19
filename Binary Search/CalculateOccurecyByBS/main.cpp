//Given a sorted array Arr of size N and a number X, you need to find the number of occurrences of X in Arr.

class Solution{
public:	
	 int lb(int arr[],int n,int x){
	     int low=0;
	     int high=n-1;
	     int f=-1;
	     
	     while(low<=high){
	         int mid=(low+high)/2;
	         if(arr[mid]==x){
	             f=mid;
	             high=mid-1;
	         }
	         else if(arr[mid]<x){
	             low=mid+1;
	         }
	         else{
	             high=mid-1;
	         }
	     }
	     
	     return f;
	 }
	 
	 int ub(int arr[],int n ,int x){
	     int low=0; int high=n-1;
	     int s=-1;
	     while(low<=high){
	         int mid=(low+high)/2;
	         if(arr[mid]==x){
	             s=mid;
	             low=mid+1;
	         }
	         else if(arr[mid]>x){
	             high=mid-1;
	         }
	         else{
	             low=mid+1;
	         }
	           
	     }
	     return s;
	 }
	int count(int arr[], int n, int x) {
	   int lob=lb(arr,n,x);
	   if (lob==-1)return 0;
	   int u=ub(arr,n,x);
	   return (u-lob+1);
	}
};