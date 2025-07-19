#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     priority_queue<int>pq;
     // it has a property to to give priority to maximum elements in the queue .
     pq.push(5);
     pq.push(2);
     cout<<pq.top();


     // Minimum heap Priority Queue.

     priority_queue<int,vector<int>,greater<int>>pq1;
     pq1.push(7);
     pq1.push(2);
     cout<<"\n"<<pq1.top();
    return 0;
}
