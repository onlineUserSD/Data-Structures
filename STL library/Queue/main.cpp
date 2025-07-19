#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     queue<int>q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);
     q.push(5);
     cout<<q.front();
     q.pop();
     cout<<q.front();
     int i=0;

    return 0;
}
