
// REMOVE DUPLICATE ELEMENTS FROM THE ARRAY AND RETURN NUMBER OF UNIQUE ELEMENTS

#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// SOLUTION BY BRUTE FORCE METHOD.

int rd(vector<int> &a,int n)
{
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(a[i]);
    }
    int index=0;
    for(auto it:st){
        a[index]=it;
        index++;
    }
    return index;
}


// OPTIMAL  SOLUTION.
int rd1(vector<int> &a,int n){
int i=0;
int j;
for(j=1; j<n; j++){
    if(a[i]!=a[j]){
        a[i+1]=a[j];
        i++;
    }
}

return i+1;

}




int main()
{
     vector<int>arr{1,1,2,2,3,3,4,4};


     cout<<rd1(arr,arr.size());
    return 0;
}
