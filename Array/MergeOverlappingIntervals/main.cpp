#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Brute force Approach.

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m=intervals.size();
         sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;

        for(int i=0; i<m; i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end <= ans.back()[1] ){
                 continue;
            }
            for(int j=i+1; j<m; j++){
                if(end>=intervals[j][0]){
                  end=max(end,intervals[j][1]);
                }
                else{
                    break;
                }
            }
                ans.push_back({start,end});
        }
        return ans;
    }



    // Optimal Solution
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m=intervals.size();
         sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;

        for(int i=0; i<m; i++){
            if(ans.empty() || ans.back()[1]<intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }

        }
        return ans;
    }

int main()
{

    return 0;
}
