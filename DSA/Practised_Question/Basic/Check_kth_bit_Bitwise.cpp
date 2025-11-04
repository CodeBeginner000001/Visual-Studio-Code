/*
WAP a check kth bit

42

1 0 1 0 1 0

Input: N=42  k=3
Output: True

Input: N=42  k=4
Output: False

*/
#include<iostream>
using namespace std;
int main() 
{
    int n,k;
    cin>>n>>k;
    if((n&(1<<k))==1) cout<< "True";
    else cout<<"False";
}