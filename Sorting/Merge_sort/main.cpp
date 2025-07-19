#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void merge1(vector<int> &arr,int low,int mid,int high){
 vector<int>temp;


int left=low;
int right=mid+1;

while(left<=mid && right<=high){

    if(arr[left]<arr[right]){
         temp.push_back(arr[left]);
        left++;

    }
    else  {
         temp.push_back(arr[right]);
        right++;
    }
}

while(left<=mid){
     temp.push_back(arr[left]);
    left++;

}

while(right<=high){
    temp.push_back(arr[right]);
    right++;
}

for(int j=low; j<=high; j++){
    arr[j]=temp[j-low];

}


}

void mergeSort(vector<int> &arr,int low,int high){
int mid=(low+high)/2;
if(low>=high) return;
mergeSort(arr,low,mid);
mergeSort(arr,mid+1,high);
merge1(arr,low,mid,high);
}
/*void ms(vector<int> &arr,int n){
     mergeSort(arr,0,n-1);
}*/
int main()
{
     int n;
     cout<<"Enter the size of array";
     cin>>n;
     vector<int>arr;
     cout<<"Input the elements of array:"<<endl;
     for(int i=0; i<n; i++){
        cout<<"Enter element "<<i<<":";
        int ele;
        cin>>ele;
        arr.push_back(ele);
      }
mergeSort(arr,0,n-1);
for (auto it=arr.begin(); it<arr.end(); it++)
    cout<<*it<<" ";
    return 0;
}
