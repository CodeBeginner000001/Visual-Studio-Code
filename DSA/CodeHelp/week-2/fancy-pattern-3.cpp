/*
Write a program to make a pattern
Input:
n = 4

Output:
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

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
        int num = 0;
        while (j < 2 * i + 1)
        {
            if (j == 0 || j == 2 * i)
                cout << "* ";
            else if (j <= i)

                cout << ++num << " ";

            else

                cout << --num << " ";

            j++;
        }
        cout << endl;
        i++;
    }
    i = n - 2;
    while (i >= 0)
    {
        int j = 0;
        int num = 0;
        while (j < 2 * i + 1)
        {
            if (j == 0 || j == 2 * i)
                cout << "* ";
            else if (j <= i)
                cout << ++num << " ";
            else
                cout << --num << " ";
            j++;
        }
        cout << endl;
        i--;
    }
}