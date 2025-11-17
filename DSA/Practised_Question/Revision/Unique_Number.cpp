#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    int i=0;
    int ans=0;
    while(i<n)
    {
        cin>>num;
        ans^=num;
        i+=1;
    }
    cout<<ans<<endl;
}

