/*
WAP to find the largest number entered

Input
5
2 5 8 6 0

Output
8

Input
3
-2 -10 -15

Output
-2

*/

#include <iostream>
using namespace std;
int main()
{
    int n, larger, i = 1, b;
    cin >> n;
    while (i <= n)
    {
        larger = INT_MIN;
        cin >> b;
        if (larger < b)
        {
            larger = b;
        }
        i += 1;
    }
    cout << larger;
}