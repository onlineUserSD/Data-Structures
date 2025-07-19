// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. 
// Each hour, she chooses some pile of bananas and eats k bananas from that pile.
//  If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
// Return the minimum integer k such that she can eat all the bananas within h hours.
#include<iostream>
#include<bits/stdc++.h>
using namespace std

class Solution {
public:
    int func(vector<int>&a, int n){
        long int total=0;
        for(int i=0; i<a.size(); i++){
            total+=ceil((double)a[i]/n);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
       int maxi=INT_MIN;
        for(int i=0; i<piles.size(); i++)maxi=max(maxi,piles[i]);
       int low=1;
        int high=maxi;
        long int ans=INT_MAX;
        while(low<high){
             int mid=low+(high-low)/2;
             int req=func(piles,mid);
            if(req<=h){
                ans=mid;
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
     
};