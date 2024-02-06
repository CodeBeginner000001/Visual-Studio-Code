/*
Q1) Sum of even numbers till N
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number till you want to find sum of even number: ";
    cin >> n;
    int sum = 0;
    if (n > 0)
    {
        for (int i = 0; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                sum += i;
            }
        }
        cout << "\nSum of Even numbers: " << sum;
    }
    else if (n < 0)
    {
        for (int i = 0; i >= n; i--)
        {
            if (i % 2 == 0)
                sum += i;
        }
        cout << "\nSum of Even numbers: " << sum;
    }
}