#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n&(n-1))==0) cout<<"Square of 2"<<endl;
    else cout<<"Not a square of 2"<<endl;
}