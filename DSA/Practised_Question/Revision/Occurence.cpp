#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // first_Occurence

    // int i=0;
    // bool flag=false;
    // while(i<n)
    // {
    //     if(a[i]==t)
    //     {
    //         cout<< i <<endl;
    //         flag=true;
    //         break;
    //     }
    //     i+=1;
    // }
    // if(!flag) cout<<"-1";

    // Last occurence

    // int i=n-1;
    // bool flag=false;
    // while(i>=0)
    // {
    //     if(a[i]==t)
    //     {
    //         cout<<i<<endl;
    //         flag=true;
    //         break;
    //     }
    //     i--;
    // }
    // if(!flag) cout<<"-1";

    // All_occurence
    int i=0,j=n-1;
    bool flag=false;
    int count=0;
    while(i<j)
    {
        if(a[i]==t || a[j]==t)
        {
            count++;
            flag=true;
        }
        i++;
        j--;
    }
    if(!flag) cout<<"-1"<<endl;
    cout<<count<<endl;
}