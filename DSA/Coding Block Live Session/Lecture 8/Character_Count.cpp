/*
WAP to count number of character before $

Input:
Hello World hi$

Output:
14

*/
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    char ch;
    while (true)
    {
        ch = cin.get();
        if (ch == '$')
            break;
        count++;
    }
    cout << count;
}