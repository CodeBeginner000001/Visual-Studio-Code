#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    n&(1<<k)? cout<<"True"<<endl:cout<<"false"<<endl;
}