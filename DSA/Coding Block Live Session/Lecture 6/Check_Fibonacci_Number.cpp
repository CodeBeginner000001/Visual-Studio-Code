/*
WAP to check if a number is a fibonacci number or not and at what position starting from 0
if a number is a fibonacci number print its position and True
and if not print False

Input        Input
8            4
Output       Output
6            False
True

Explaintion
A number 8 is entered
its a fibonacci number at position 6
so output should be given as above

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 0 || n == 1)
    {
        cout << n << endl;
        cout << "True";
    }
    else
    {
        int a = 0;
        int b = 1;
        int c, i = 2;
        while (true)
        {
            c = a + b;
            if (c == n)
            {
                cout << i << endl;
                cout << "True";
                break;
            }
            if (c > n)
            {
                cout << "False";
                break;
            }
            a = b;
            b = c;
            i += 1;
        }
    }
}