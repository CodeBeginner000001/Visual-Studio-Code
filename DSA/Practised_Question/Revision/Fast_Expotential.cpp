#include<iostream>
using namespace std;
int main()
{
     int n,a;
     cin>>a>>n;
     int r=1;
     while(n>0)
     {
        if((n&1)==1)
        {
            r=r*a;
        }
        a=a*a;
        n>>=1;
     }
     cout<<r;
}