/*
For a given integer, print the pattern.

Input Format
You will get 1 integer from user-n.

Constraints
2<=n<=10

Output Format
Print the pattern

Sample Input
5
Sample Output
* * * * * * * * * *
* a _ _ _ _ _ _ A *
* _ a _ _ _ _ A _ *
* _ _ a _ _ A _ _ *
* _ _ _ a A _ _ _ *
* _ _ _ A a _ _ _ *
* _ _ A _ _ a _ _ *
* _ A _ _ _ _ a _ *
* A _ _ _ _ _ _ a *
* * * * * * * * * *
Explanation
This is similar to the diamond type pattern done in class.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= 0 && j == 0 || i == 0 && j >= 0)
            {
                cout << "* ";
            }
            else if (i == j)
            {
                cout << "a ";
            }
            else
            {
                cout << "_ ";
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i + j < n && i == 0 || i + j >= n && j == n - 1)
            {
                cout << "* ";
            }
            else if (i + j == n - 1 && i != 0)
            {
                cout << "A ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n && j == 0 || i + j >= n - 1 && i == n - 1)
            {
                cout << "* ";
            }
            else if (i + j == n - 1 && j > 0)
            {
                cout << "A ";
            }
            else
            {
                cout << "_ ";
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i == j && j < n - 1)
            {
                cout << "a ";
            }
            else if (j == n - 1 || i == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
}