#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void intersection(vector<int>&a,vector<int>&b){
int i=0;
int j=0;
int n1=a.size();
int n2=b.size();
vector<int>arr;

while(i<n1 && j<n2){
    if(a[i]<b[j]){
        i++;
    }
    else if(a[i]>b[j]){
        j++;
    }
    else{
        arr.push_back(a[i]);
        i++;
        j++;
    }
}

   for(auto it : arr){
    cout<<it<<" ";
   }

}


int main()
{
     vector<int>a={1,2,3,4,5,6};
     vector<int>b={1,3,5,6};
     intersection(a,b);

    return 0;
}
