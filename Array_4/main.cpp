#include <iostream>
#include<bits/stdc++.h>


// Rigth rotate an array.

using namespace std;

class Solution {
public:
    void rotate(int nums[], int k,int n) {
     k=k%n;
     
       rev(nums,0,n);
       rev(nums,0,k);
       rev(nums,k,n);

    }

    public:
    void rev(int num[],int a,int b){
         while(a<b){
            int temp=num[a];
            num[a]=num[b];
            num[b]=temp;
            a++;
            b--;
         }
    }
};

class Solution2{
    
};

int main()
{
     int arr[7]={1,2,3,4,5,6,7};
     
    Solution ob;
    ob.rotate(arr,3, 7);
     for(int i=0; i< 7; i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}
