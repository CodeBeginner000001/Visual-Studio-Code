#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int csum[n+1];
    csum[0]=0;
    for(int i=1;i<=n;i++) csum[i]=csum[i-1]+arr[i-1];
    int max1=INT_MIN;
    for(int i=0;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int sum =csum[j]-csum[i];
            max1=max(max1,sum);
        }
       
    }
    cout<<max1;
}