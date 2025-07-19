// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std

class solution{
    
public:

long long int floorSqrt(long long int n) {
        // Your code goes here
        long long int low=1;
         long long int high=n;
         long long int sqrt=1;
         
         while(low<=high){
            long long int mid=(low+high)/2;
             
              if((mid*mid)<=n){
                 sqrt=mid;
                 low=mid+1;
             }
             else{
                 high=mid-1;
             }
         }
         return sqrt;
    }

};