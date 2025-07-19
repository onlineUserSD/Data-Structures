

// FIND THE SECOND LARGEST ELEMEMT IN AN ARRAY.

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cout<<"Enter the number of elements in array:";
    cin>>n;
    for(int i=0; i<n; i++){
        int ele;
        cout<<"Enter the element"<<i<<" :";
        cin>>ele;
        arr.push_back(ele);
    }

    int largest=arr[0];
    int slargest=-1;
    for(int i=0; i<n; i++){

        if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];

        }
       else if(arr[i]!=largest && arr[i]>slargest){
            slargest=arr[i];
        }
    }
    cout<<"Largest element in array is "<<largest<<endl;
    cout<<"Second largest element in the array is "<<slargest;
    return 0;
}
