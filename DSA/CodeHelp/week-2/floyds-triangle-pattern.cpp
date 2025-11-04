/*
Write a program to make a pattern
Input:
n = 7

Output:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int num = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            cout << ++num << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}