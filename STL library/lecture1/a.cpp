#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    map<int,int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    // Accessing the elements of map

    for(auto it : mpp){
        cout<< it.first <<"- - >"<<it.second <<endl;
    }

    int q;
    cout<<"Enter the number of queries : ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<"Occurrence of "<<number<<" = "<<mpp[number];
    }

    // Find the highest  occurrence.
    pair<int,int> max={0,0};
            for(auto it2: mpp){
        if(max.second<it2.second)  max ={it2.first,it2.second};
    }

    cout<<max.first<<" appears "<<max.second<<" times";



    return 0;
}
