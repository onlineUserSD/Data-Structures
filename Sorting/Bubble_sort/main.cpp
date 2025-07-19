#include <iostream>
using namespace std;

void bubble__sort(int a[],int n){
for(int i=n-1; i>=1; i--){
        int didSwap=0;
    for(int j=0; j<i; j++){
        if(a[j]>a[j+1]) {swap(a[j],a[j+1]);
        didSwap=1;
    }}
    if(didSwap==0)
        break;
}
cout<<"\n";
for (int i =0; i<n; i++){
cout<<a[i]<< " ";
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
bubble__sort(arr,n);
    return 0;
}
