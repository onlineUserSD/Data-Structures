#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s,int st,int en){
while(st<=en){
if(s[st] != s[en])return false;
else
{
    st++;
    en--;

}

}
return true;
}

int main()
{
     string nums="sass";
     cout<<checkPalindrome(nums,0,nums.size()-1);
    return 0;
}
