#include<iostream>
using namespace std;
int main()
{
    int c[4];
    memset(c,0,sizeof(c));
    for(int i=0;i<4;i++)
    {
        cout<<c[i]<<" ";
    }
}