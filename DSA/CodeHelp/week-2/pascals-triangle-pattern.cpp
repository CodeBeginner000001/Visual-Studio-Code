/*
Write a program to make a pattern
Input:
n = 7

Output:

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int c = 1;
        while (j <= i)
        {
            cout << c << " ";
            c = c * (i - j) / j;
            j++;
        };
        cout << endl;
        i++;
    };
}