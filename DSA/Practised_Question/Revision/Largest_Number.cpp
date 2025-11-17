#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int largest = INT_MIN;
    while(i<=n)
    {
        int g;
        cin>>g;
        if(g>largest)
        {
            largest=g;
        }
        i+=1;
    }
    cout<<largest;
}
