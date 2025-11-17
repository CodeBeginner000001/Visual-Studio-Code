#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x=0;
    int y=0;
    char ch;
    while(true)
    {
        cin.get(ch);
        if(ch=='\n') break;
        else if(ch=='N') y++;
        else if(ch=='S') y--;
        else if(ch=='E') x++;
        else if(ch=='W') x--;
    }
    if(x>0){
        for(int i=1;i<=x;i++)
        {
            cout<<"E ";
        }
    }
    if(y>0){
        for(int i=1;i<=y;i++)
        {
            cout<<"N ";
        }
    }
    if(y<0){
        for(int i=1;i<=abs(y);i++)
        {
            cout<<"S ";
        }
    }
    if(x<0){
        for(int i=1;i<=abs(x);i++)
        {
            cout<<"W ";
        }
    }
    cout<<endl;
}