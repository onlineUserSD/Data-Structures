#include <iostream>


// Print from 1 to n by backtracking.

using namespace std;


void print(int i,int n){
if(i<1){
    return;
}
else {
    print(i-1,n);
    cout<<i;
}

}

int main()
{
    int n;
    cin>> n;
     print(n,n);
    return 0;
}
