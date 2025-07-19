#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
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
};

int main()
{

    return 0;
}
