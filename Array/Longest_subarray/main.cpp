#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Positive{

  public:

      void brforce(vector<int>&a,int k){
      int sum;
      int len=0;
      int n=a.size();

      for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum+=a[i];
            if(sum==k){
                len=max(len,j-i+1);
            }
        }
      }

      cout<<"Max length of sub array is: "<<len;

      }


      void better(vector<int>&a,long long k){
          // Can run for both positive and negative and is a OPTIMAL solution if there is negatives elements.
        map<long long,int> preSum;
        long long sum=0;
        int maxLen=0;
        for(int i=0; i<a.size(); i++){
            sum+=a[i];
            if(sum==k){
                maxLen=max(maxLen,i+1);
            }
            long long rem=sum-k;
            if(preSum.find(rem)!= preSum.end()){
                int len=i-preSum[rem];
                maxLen=max(maxLen,len);
            }
            if(preSum.find(sum)==preSum.end()){
            preSum[sum]=i;
            }
        }
        cout<<maxLen;
      }

      void optimal(vector<int>&a, long long k){
      int left=0;
      int right=0;
      long long sum=a[0];
      int maxLen=0;
      int n=a.size();
      while(right<n){

        while(left<=right && sum>k){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
        sum+=a[right];

        }
      }

      cout<<maxLen;
      }

};

int main()
{
    Positive ob;
    vector<int>a={1,2,2,1,3,4,1,1,1,2};
    int k=4;
    ob.optimal(a,k);
    return 0;
}
