// Problem statement
// You're given a sorted array 'a' of 'n' integers and an integer 'x'.
// Find the floor and ceiling of 'x' in 'a[0..n-1]'.
// Note:
// Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.
// Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int low=0;
	int high=n-1;
	int f=-1;
	int c=-1;
	pair<int,int>ans;

	while(low<=high){
		int mid=(low+high)/2;

		if(a[mid]>=x){
			c=a[mid];
			high=mid-1;
		}
		else low=mid+1;
	}

       low=0;
       high=n-1;

	while(low<=high){
		int mid=(low+high)/2;

		if(a[mid]<=x){
			f=a[mid];
			low=mid+1;
		}
		else high=mid-1;
	}
	
	ans={f,c};
	return ans;
}