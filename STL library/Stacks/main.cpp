#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(9);
    cout<<st.top();
    st.pop();
    cout<<st.top();


    return 0;
}
