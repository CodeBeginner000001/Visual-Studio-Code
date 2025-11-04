/*
Write a program to make a pattern
Input:
n = 5

Output:
1 2 3 4 5
2     5
3   5
4 5
5

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
        while (j < n)
        {
            if (i == 0 || j == 0 || i + j == n - 1)
                cout << i + j + 1 << " ";
            else
                cout << "  ";
            j++;
        }
        cout << endl;
        i++;
    }
}