#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reverse the array

    // int i=0;
    // int j=n-1;
    // while(i<j)
    // {
    //     arr[j]=(arr[i]+arr[j])-(arr[i]=arr[j]);
    //     i++;
    //     j--;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< arr[i]<<" ";
    // }

    // Reverse in a range
    int i,j;
    cin>>i>>j;
    while(i<j)
    {
        arr[j]=(arr[i]+arr[j])-(arr[i]=arr[j]);
        i++;
        j--;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}