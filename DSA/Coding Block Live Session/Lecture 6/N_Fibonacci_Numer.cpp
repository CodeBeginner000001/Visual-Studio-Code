/*
WAP to display a fibonacci number at a particular postion

0 1 2 3 4 5 6 7  8  9  10 11 12 ....
0 1 1 2 3 5 8 13 21 34 55 89 144

Input
4
Output
3

Input
6
Output
8

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
        int a = 0; // 0th number
        int b = 1; // 1st number
        int i = 2; // starting iteration
        int c;     // storing the fibonacci number
        while (i <= n)
        {
            c = a + b;
            a = b;
            b = c;
            i += 1;
        }
        cout << c;
    }
}