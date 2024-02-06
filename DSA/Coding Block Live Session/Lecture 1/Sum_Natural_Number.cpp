/*
WAP to give the sum of natural number

Input: 5

1+2+3+4+5

Output: 15
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, i = 1;
    cin >> n;
    while (i <= n)
    {
        sum += i;
        /* code */
        i += 1;
    }
    cout << sum;
}