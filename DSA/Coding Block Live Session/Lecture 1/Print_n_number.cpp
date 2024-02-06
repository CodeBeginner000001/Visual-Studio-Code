/*
WAP to print the series of number

Input
5

Output
1 2 3 4 5
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        cout << i << " ";
        i += 1;
    }
}