#include<iostream>
using namespace std;
int main()
{
    int uppercase=0;
    int lowercase=0;
    int digit=0;
    int special=0;
    int whitespace=0;
    char ch;
    while(true)
    {
        cin.get(ch);
        if(ch=='\n') break;
        else if(ch>='A' && ch<='Z') uppercase++;
        else if(ch>='a' && ch<='z') lowercase++;
        else if(ch>='0' && ch<='9') digit++;
        else if(ch==' ') whitespace++;
        else special++;
    }
    cout<<"Uppercase: "<<uppercase<<endl;
    cout<<"Lowercase: "<<lowercase++<<endl;
    cout<<"Digit: "<<digit<<endl;
    cout<<"Special: "<<special<<endl;
    cout<<"Whitespace: "<<whitespace<<endl;
}