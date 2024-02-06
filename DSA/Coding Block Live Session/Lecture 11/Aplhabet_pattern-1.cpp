/*
WAP to print the givem pattern

Input:
5

Output:

A B C D E
A B C D
A B C
A B
A

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
            if (i + j > n - 1)
                cout << "  ";
            else
                cout << (char)(j + 'A') << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}