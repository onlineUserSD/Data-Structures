#include <iostream>
//reverse an array by using recursion.
using namespace std;



void revArr(int arr[],int i, int j){
if(i>j || i==j){
    return;
}
swap(arr[i],arr[j]);
revArr(arr,i+1,j-1);

}

int main()
{
    int n;
    cout<<"input the size of array :";
    cin>>n;
    int b=0;
    int c=n-1;
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i<<"th element:";
        cin>>arr[i];
    }
    cout<<"\nOriginal Array : ";
     for (int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
     }
     revArr(arr,b,c);
     cout<< "\nReversed array : ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
     }
    return 0;
}
