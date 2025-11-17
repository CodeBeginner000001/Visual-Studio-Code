#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n>>i>>j;
    int mask= ~1<<(j+1);
    int mask2= (1<<i)-1;
    int ans= mask | mask2;
    cout<<(n&ans)<<endl;
}