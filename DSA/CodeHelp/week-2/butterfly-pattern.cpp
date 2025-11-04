/*
Write a program to make a pattern
Input:
n = 5

Output:

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *

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
            if (i >= j)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        j = 0;
        while (j < n)
        {
            if (i + j >= n - 1)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
    i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (i + j < n)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        j = 0;
        while (j < n)
        {
            if (i <= j)
                cout << "* ";
            else
                cout << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}