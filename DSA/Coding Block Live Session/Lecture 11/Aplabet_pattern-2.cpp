/*
WAP to print the following pattern

Input :
5

Output :

A B C D E E D C B A
A B C D D C B A
A B C C B A
A B B A
A A

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (i + j <= n - 1)
                cout << (char)(j + 'A') << " ";
            j += 1;
        }
        j = 0;
        while (j < n)
        {
            if (i + j <= n - 1)
                cout << (char)(-i - j + 'E') << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}