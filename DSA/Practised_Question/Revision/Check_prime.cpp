#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=2;

    // Method-1
    // while(i<=n-1)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<"not prime"<<endl;
    //         return 0;
    //     }
    //     i+=1;
    // }
    // cout<<"Prime"<<endl;

     // Method-2
    // while(i*i<=n)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<"not prime"<<endl;
    //         return 0;
    //     }
    //     i+=1;
    // }
    // cout<<"Prime";

    // Method-3
    while(i<=sqrt(n))
    {
        if(n%i==0)
        {
            cout<<"Not Prime"<<endl;
            return 0;
        }
        i+=1;
    }
    cout<<"Prime"<<endl;

}