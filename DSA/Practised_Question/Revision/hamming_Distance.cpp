#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int ans= n^m;
    int count=0;
    while(ans>0)
    {
        ans=ans&(ans-1);
        count++;
    }
    cout<<count;
}