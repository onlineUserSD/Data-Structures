#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
     int bruteforce(vector<int>& nums) {
        int count=0;
        int max=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=1){

                count=0;

            }

            else{

                count++;
                if(count>=max)
                max=count;

            }
        }
        return max;

    }

    // Better approach will be using hash map
    // Optimal approach will be using XOR property.


};




int main()
{
     Solution ob;
     vector<int>a={1,1,2,3,3,4,4};
    cout<< ob.bruteforce(a);
    return 0;
}
