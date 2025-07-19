#include <iostream>
#include<bits/stdc++.h>

using namespace std;


// Using Brute force approach.

void brt(vector<int>&a){
int n=a.size();
vector<int> pos;
vector<int>neg;
for(int i=0; i<n; i++){
    if(a[i]>=0){
        pos.push_back(a[i]);
    }
    else{
        neg.push_back(a[i]);
    }
}
for(int i=0; i<n/2; i++){
    a[2*i]=pos[i];
    a[2*i+1]=neg[i];
}


}




vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posIndex=0;
        int negIndex=1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0){
                ans[posIndex]=nums[i];
                posIndex+=2;
            }
            else{
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
        }
        return ans;
    }



    // If the numbers of positive and negative are different.

    vector<int> posneg(vector<int>&a){
    vector<int>pos;
    vector<int>neg;
    int n=a.size();
    for(int i=0; i<n; i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }

        else{
            neg.push_back(a[i]);
        }
    }


    if(pos.size()>neg.size())
        {
        for(int i=0; i<neg.size(); i++){
            a[2*1]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=2*neg.size();
        for(int i=neg.size(); i<pos.size(); i++){
            a[index]=pos[i];
            index++;
        }
    }

    else{
        for(int i=0; i<pos.size(); i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }

        int index=pos.size()*2;
        for(int i=pos.size(); i<neg.size(); i++){
            a[index]=neg[i];
            index++;
        }

    }

    return a;
    }

int main()
{
    vector<int>arr={-1,3,5,6,-2,-5};
    brt(arr);
    for(auto it: arr){
        cout<<it<<" ,";
    }
     return 0;
}
