#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
