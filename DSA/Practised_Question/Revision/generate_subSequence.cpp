#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int num=0;num<(1<<n);num++)  // pow(2,n);
    {
        for(int i=0;i<n;i++)
        {
           if((num&(1<<i))!=0) cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}