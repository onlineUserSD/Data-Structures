#include <iostream>

using namespace std;

void insertion_sort(int a[],int n){
for(int i=0; i<n; i++){
       int j=i;
    while(j>0 && a[j-1]>a[j]){
        swap(a[j-1],a[j]);
        j--;
    }

}
for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
}

}

int main()
{
      int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for (int i=0; i<n; i++){
        cout<<"Element "<<i<<" : ";
        cin>>arr[i];
    }

    insertion_sort(arr,n);
    return 0;
}
