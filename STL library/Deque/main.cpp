#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int>dq;
    dq.push_back(10);
    dq.pop_front(4);
    dq.erase(dq.begin+1);
    dq.clear();
    // THIS IS ALSO SAME AS VECTORS AND LIST

    return 0;
}
