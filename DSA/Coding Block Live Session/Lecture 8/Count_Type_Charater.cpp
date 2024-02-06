/*
WAP to count the type of charater in a string

Input:
Hello World$

Output:
Uppercase: 2
Lowercase: 8
Digit: 0
Whitespaces: 1
Special: 0

*/
#include <iostream>
using namespace std;
int main()
{
    char ch;

    int lcase = 0;
    int ucase = 0;
    int digit = 0;
    int space = 0;
    int special = 0;

    while (true)
    {
        ch = cin.get();
        if (ch == '$')
            break;
        else if (ch >= 'A' && ch <= 'Z')
            ucase++;
        else if (ch >= 'a' && ch <= 'z')
            lcase++;
        else if (ch >= '0' && ch <= '9')
            digit++;
        else if (ch == ' ' || ch == '\n' || ch == '\t')
            space++;
        else
            special++;
    }

    cout << "Uppercase: " << ucase << endl;
    cout << "Lowercase: " << lcase << endl;
    cout << "Digit: " << digit << endl;
    cout << "Whitespaces: " << space << endl;
    cout << "Special: " << special << endl;
}