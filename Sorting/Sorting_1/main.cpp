#include <iostream>
#include<bits/stdc++.h>
// Selection sort.
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    int mini;
    for (int i=0; i<n; i++){
        cout<<"Element "<<i<<" : ";
        cin>>arr[i];
    }

    // Sorting the array.

    for(int i=0; i<=n-2; i++){
        mini=i;
        for(int j=i; j<=n-1; j++){
            if(arr[mini]>arr[j]) mini=j;
        }
        swap(arr[i],arr[mini]);
    }

     for (int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }



    return 0;
}
