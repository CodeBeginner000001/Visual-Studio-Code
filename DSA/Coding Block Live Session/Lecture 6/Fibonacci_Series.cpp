/*
WAP to print fibonacci Series till a number

0 1 2 3 4 5 6 7  8  9  10 11 12 ....
0 1 1 2 3 5 8 13 21 34 55 89 144

Input
4
Output
0 1 1 2 3

Input
6
Output
0 1 1 2 3 5 8

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << n;
    }
    else
    {
        int a = 0;
        int b = 1;
        int i = 2;
        cout << a << " " << b << " ";
        while (i <= n)
        {
            int c = a + b;
            cout << c << " ";
            a = b;
            b = c;
            i += 1;
        }
    }
}