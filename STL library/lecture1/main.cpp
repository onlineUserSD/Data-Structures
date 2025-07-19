#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    /* pair <int,int> p={1,2};
     cout << p.first<<endl;
     pair <int, pair <int,int>> q={2,{3l,4}};
     cout <<q.second.second;*/

 //pair<int,int>s;

 vector<int> v1;
 /*cout<<v[1];
 vector<int>::iterator it=v1.begin();
 it++;
 cout<<*(it)<<" ";-*/
 int i;
 int val;
 for(i=1; i<=5; i++){
    cout<<"Enter the value";
     cin>>val;
    v1.push_back(val);
 }
 //for(int item:v1)
   // cout <<  item<< " ";


  /* for(vector<int>::iterator it=v1.begin(); it!=v1.end(); it++)
    cout<<*(it)<<" ";
 cout<<endl;*/

 for(auto it=v1.begin(); it!=v1.end();it++)
    cout<<*(it)<<" ";
 v1.erase(v1.begin()+1);
 for(auto it=v1.begin(); it!=v1.end();it++)
    cout<<*(it)<<" ";

    return 0;
}
