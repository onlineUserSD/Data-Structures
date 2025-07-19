#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bruteforce(vector<int>&a,int target){
int f,s;
for(int i=0; i<a.size();i++){
    for(int j=i+1; j<a.size(); j++){
        if(a[i]+a[j]==target){
                f=i;
                s=j;
             break;
        }
    }

}
             cout<<"["<<f<<","<<s<<"]";


}

void better(vector<int>&a,int target){
map<int,int> mpp;
int req=0;
int f,s;
for(int i=0; i<a.size(); i++){
        req=target-a[i];
    if(i==0 || mpp.find(req)==mpp.end()){
        mpp[a[i]]=i;
    }
    else{
        f=mpp[req];
        s=i;
        break;
    }

}
cout<<f<<" ,"<<s;
}



bool optimal(vector<int>&a,int target){
int left=0;
int n=a.size();
int right=n-1;
int f,s;
sort(a.begin(),a.end());
while(left<right){
    int sum=a[left]+a[right];
    if(sum==target){
          return "YES";
    }

    else if(sum>target)
        right--;
    else
        left++;
}

return "NO";

}
int main()
{
     vector<int>a={2,5,3,8};
    int t=13;
    cout<<optimal(a,t);
    return 0;
}
