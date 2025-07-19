#include <iostream>
#include<bits/stdc++.h>

// Check if a string is palindrome or  not
using namespace std;

int f(int i, string &s){

if(i>=s.size()/2) return true;

if(s[i]!=s[s.size()-i-1])
    return false;
f(i+1,s);

}



int main()
{
     string s;
     cin>>s;
     cout<<f(0,s);


    return 0;
}
