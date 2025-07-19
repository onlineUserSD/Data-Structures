#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int part(vector<int> &arr,int low,int high){
int pivot=low;
int i=low;
int j=high;
while(i<j){
    while(arr[i]<=arr[pivot]&&i<=high-1){
        i++;
    }
    while(arr[j]>arr[pivot]&& j>=low+1){
        j--;
    }
     if(i<j)
    swap(arr[i],arr[j]);

}


        swap(arr[j],arr[low]);

    return j;
}

void quicksort(vector<int> &arr,int low,int high){
 if(low<high){

    int p=part(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);

 }


}

int main()
{
     vector<int> arr;
     cout<<"Enter the size of the array: ";
     int n;
     cin>>n;
     for(int i=0; i<n;i++){
        cout<<"Enter element "<<i<<": ";
        int ele;
        cin>>ele;
        arr.push_back(ele);
     }
     quicksort(arr,0,n-1);
     for(auto it : arr){
        cout<<it<<" ";
     }
    return 0;
}
