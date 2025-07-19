#include <iostream>
#include<bits/stdc++.h>

// Calculate the frequency of a character in a string.

using namespace std;

int main()
{

 string s;
 cout<<"Enter the string : ";
 cin>>s;


 int hash[256]={0};


 for(int i=0; i<s.size(); i++){
    hash[s[i]]+=1;
 }

 int q;
 cout<<"Enter the number of queries :" ;
 cin>>q;
 while(q--){

    char sr;
    cout<<"Enter the character : ";
    cin>>sr;
    cout<<"Frequency of "<<sr<<"is : "<<hash[sr]<<endl;
 }
    return 0;
}
