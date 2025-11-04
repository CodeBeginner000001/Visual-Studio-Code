/*
Write a program to make a pattern
Input:
n = 5

Output:
1
1 2
1   3
1     4
1 2 3 4 5

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            if (i == j || j == 0 || i == n - 1)
                cout << j + 1 << " ";
            else
                cout << "  ";
            j++;
        };
        cout << endl;
        i++;
    };
}