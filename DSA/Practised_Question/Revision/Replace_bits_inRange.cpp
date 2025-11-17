#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j,m;
    cin>>i>>j>>m;
    int m1= -1<<(j+1);
    int m2= (1<<i)-1;
    int m3= m1|m2;
    n= n&m3;
    cout<<(n | (m<<i))<<endl;
}