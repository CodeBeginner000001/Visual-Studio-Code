/*
Write a program to make a pattern
Input:
n = 5

Output:
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;

    while (i < (2 * n) - 1)
    {
        int j = 0;
        while (j < n)
        {
            if (i >= j && i < n)
                cout << "* ";
            else if (i >= n && j < 2 * n - i - 1)
                cout << "* ";
            else
                cout << "  ";
            j++;
        };
        cout << endl;
        i++;
    };
}