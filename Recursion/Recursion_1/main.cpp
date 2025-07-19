
// Print from 1 to n linearly.

#include <iostream>


using namespace std;

void print(int i,int n){
  if(i<=n){
    cout<<i;

    print(i+1,n);
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
