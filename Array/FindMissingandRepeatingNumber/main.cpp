#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Brute force
vector<int>missingandrepeating(vector<int>&nums){

int n=nums.size();

int cnt;
int repeating;
int missing;
for(int i=1; i<=n; i++){
    for(int j=0; j<n; j++){
        if(nums[j]==i){
            cnt++;
        }
    }
if(cnt==2){
    repeating=i;
}
else if(cnt==0){
    missing=i;
}
}
return {repeating,missing};

// Better Approach

vector<int>better(vector<int>&nums){
int n=nums.size();
int missing=-1;
int repeating=-1;
int arr[n+1]={0};
for(int i=0; i<n; i++){
    a[nums[i]]++;
}

for(int i=0; i<n+1; i++){
    if(a[i]==2) repeating=a[i];
    else if(a[i]==0) missing=a[i];
}


return {repeating,missing};


}




}
int main()
{

    return 0;
}
