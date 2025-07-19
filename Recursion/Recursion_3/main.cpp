#include <iostream>

// Print from N to 1 by using back tracking.

using namespace std;

void print(int i,int j){

   if(i>j){
    return;
   }
   else{
    print(i+1,j);
    cout<<i;
   }
}


int main()
{
     int i=1;
     int n;
     cin>>n;

     print(i,n);
    return 0;
}
