/*
Q1
N=2
A B C D

N=3
A B C D E F
D E F G H I

N=4
A B C D E F G H
E F G  H I J K L
I J K L M N O P
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            char c = n * i + j + 'A';
            cout << c << " ";
        }
        cout << endl;
    }
}
