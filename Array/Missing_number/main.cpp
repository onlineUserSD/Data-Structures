#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int bruteforce(vector<int>&a,int n){
int flag;

for(int i=1; i<=n; i++){
    flag=0;
    for(int j=0; j<n-1; j++){
        if(a[j]==i){
            flag=1;
            break;
        }

        }
        if(flag ==0){
            return i;
    }
}
    return -1;

}

int better(vector<int>&a,int n){
int ha[n+1]={0};
for(int i=0; i<n-1; i++){
ha[a[i]]+=1;
}

for(int i=1; i<n+1; i++){
    if(ha[i]==0){
        return i;
    }
}
return -1;
}


    int optimal(vector<int>&a,int n){
    int sum=n*(n+1)/2;

    int sum0=0;
    for(int i=0; i<n-1; i++){
    sum0=sum0+a[i];
    }
    return sum-sum0;

    }



           int optimal2(vector<int>&a,int n){

           int xor1=0;
           int xor2=0;

           for(int i=0; i<n-1; i++){
            xor1=xor1^a[i];
            xor2=xor2^(i+1);
           }
           xor2=xor2^n;
           return xor2^xor1;
           }

int main()
{
     vector<int>arr={1,2,3,4,5,7};
     int n=arr.size()+1;
     cout<<optimal2(arr,n);
    return 0;
}
