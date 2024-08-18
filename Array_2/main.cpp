
// CHECK IF A ARRAY IS SORTED OR NOT


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sorted(vector<int> &a,int n){
for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){

        }

        else {
             return false;
        }
     }
return true;

}
int main()
{
     vector<int>a{1,2,9,3,5,6};


    cout<<sorted(a,a.size());
    return 0;
}
