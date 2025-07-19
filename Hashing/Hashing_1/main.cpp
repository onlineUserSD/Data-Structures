#include <iostream>
// Count the frequency of numbers in array by using hashing.
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"Input the elements : ";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};

    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"Input number of queries";
    cin>>q;
    while(q--) {
        int number;
        cout<<"Input the numbers ";
        cin>>number;
        cout<<"occurence of"<<number<<"="<< hash[number]<<endl;

    }
     return 0;
}
