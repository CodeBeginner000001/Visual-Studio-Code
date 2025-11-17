#include<iostream>
using namespace std;
int main()
{
    int n;
     cin>>n;
     int mask1=n-1;
     int mask2=0xAAAAAAAA;
     if((n&mask1)==0 &&(n&mask2)==0) cout<<"Power of 4"<<endl;
     else cout<<"Not a power of 4"<<endl;

}