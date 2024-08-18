#include <iostream>
#include<bits/stdc++.h>



using namespace std;

class Solution{

public:
    void moveZero(vector<int>&arr){
    int i;
    int j=-1;
    int n=arr.size();

    for(i=0; i<n; i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1) return;

    for(i=j+1; i<n; i++){

        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }



        }

        };

int main()
{
     Solution ob;
     vector<int> v={1,0,0,6,6,7,0,1,9};
     ob.moveZero(v);

     for(auto it: v){
        cout<<it<<" ";
     }
    return 0;
}
