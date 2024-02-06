/*
Q2
N=2
Z
Y X

N=3
Z
Y X
X W V

N=4

Z
Y X
X W V
W V U T
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
            if (i >= j)
            {
                char c = -i - j + 'Z';
                cout << c << " ";
            }
        }
        cout << endl;
    }
}
