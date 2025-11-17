#include<iostream>
using namespace std;

// Method -1
// int main()
// {
//     int n;
//     cin>>n;
//     int count=0;
//     while(n>0)
//     {
//         if((n&1)==1) count++;
//         n>>=1;
//     }
//     cout<<count<<endl;
// }

// Method-2
// int main()
// {
//     int n;
//     cin>>n;
//     int count=0;
//     while(n>0)
//     {
//         n=n&(n-1);
//         count++;
//     }
//     cout<<count<<endl;
// }

// Method -3
int main()
{
    int n;
    cin>>n;
    int count=0;
    int k=0;
    while(k<ceil(log2(n+1)))
    {
        if((n&(1<<k))>0)
        {
            count++;
        }
        k+=1;
    }
    cout<<count<<endl;
}