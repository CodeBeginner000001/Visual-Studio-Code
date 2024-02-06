/*
Q3

n=2
* C
4 *

n=3
* C E
6 * G
9 12 *

n=4
* C E G
8 * G I
12 16 * K
16 24 28 *
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
            if (i == j)
            {
                cout << "*"
                     << " ";
            }
            else if (i > j)
            {
                cout << n * i + n * j + n << " ";
            }
            else
            {
                char c = 2 * i + 2 * j + 'A';
                cout << c << " ";
            }
        }
        cout << endl;
    }
}
