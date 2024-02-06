/*
WAP to print following pattern

Input
5
Output
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i <= n - 1)
    {
        int num = i + 1;
        int j = 0;
        while (j <= n - 1)
        {
            if (i + j < n - 1)
                cout << "  ";
            else
            {
                cout << num << " ";
                num++;
            }
            j += 1;
        }
        j = 0;
        while (j < n - 1)
        {
            if (i > j)
                cout << 2 * i - j << " ";
            else
                cout << "  ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}