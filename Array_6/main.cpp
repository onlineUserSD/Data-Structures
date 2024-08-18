#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Union of two sorted arrays.

class Solution{

    // Brute force solution.
    public:
      void unionOfTwo(vector<int>&arr1,vector<int>&arr2){
           set<int>st;
           for(int i=0; i<arr1.size(); i++){
            st.insert(arr1[i]);

           }

           for(int i=0; i<arr2.size(); i++){
              st.insert(arr2[i]);

           }

           for(auto it: st){
            cout<<it<<" ";
           }

      }

  public:
      void unionOfTwo1(vector<int>&arr1, vector<int>&arr2){

                vector<int>uni;
                int i=0;
                int j=0;


                int n=arr1.size();
                int s=arr2.size();
                while(i<n && j<s){

                    if(arr1[i]<arr2[j]){
                        if(uni.size()==0 || uni.back() != arr1[i]){
                        uni.push_back(arr1[i]);
                        }
                        i++;
                    }


                    if(arr1[i]>arr2[j]){
                        if(uni.size()==0 || uni.back() != arr2[j]){
                        uni.push_back(arr2[j]);
                        }
                        j++;
                    }





                }
                 while(i<n){


                         if(uni.size()==0 || uni.back() != arr1[i]){
                        uni.push_back(arr1[i]);
                        }
                        i++;
                    }

                    while(j<s){
                         if(uni.size()==0 || uni.back() != arr2[j]){
                        uni.push_back(arr2[j]);
                        }
                        j++;

                    }


                    for(auto it:uni){
                        cout<<it<<" ";
                    }
        }



};




int main()
{
     Solution ob;
    vector<int>arr1={1,3,5,6,7,8};
    vector<int>arr2={1,2,3,4,6,9};

    ob.unionOfTwo1(arr1,arr2);

    return 0;
}
