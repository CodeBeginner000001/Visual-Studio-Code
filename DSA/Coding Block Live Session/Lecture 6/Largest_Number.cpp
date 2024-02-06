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
    int n;
    cin >> n;

    int data = INT_MIN;
    int i = 1;
    while (i <= n)
    {
        int g;
        cin >> g;
        if (g > data)
        {
            data = g;
        }
        i += 1;
    }
    cout << data;
}
