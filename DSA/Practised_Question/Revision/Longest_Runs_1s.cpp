#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int largest=0;
    int max_1=0;
    while(n>0)
    {
        if((n&1)==1)
        {
            largest++;
            max_1=max(max_1,largest);
        }
        if((n&1)==0)
        {
            
            largest=0;
        }
        n>>=1;
    }
    cout<<max_1;
}