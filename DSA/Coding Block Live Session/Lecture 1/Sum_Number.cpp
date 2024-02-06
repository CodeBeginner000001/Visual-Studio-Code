/*
WAP to sum of numbers entered by the user

Input: 5
10 20 30 40 50
Output: 150

*/

#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, sum = 0;
    cin >> n;
    while (i <= n)
    {
        int b;
        cin >> b;
        sum += b;
        i += 1;
    }
    cout << sum;
}