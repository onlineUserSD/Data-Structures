#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v(2,200);
    cout<<v.size()<<endl;
    for(int it:v)
        cout<<it<<" ";
    v.insert(v.begin(),300);
    cout<<"\n"<<v.size()<<endl;
    return 0;
}
