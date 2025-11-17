#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    while(n>0)
    {
        int d=n%10;
        ans=ans*10+d;
        n=n/10;
    }
    cout<<ans<<endl;
}