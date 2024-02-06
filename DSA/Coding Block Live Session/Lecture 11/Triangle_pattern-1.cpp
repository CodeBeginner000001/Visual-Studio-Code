/*
WAP to print the pattern

Input:
9

Output:

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        int i = 0;
        while (i <= (n - 1) / 2)
        {
            int j = 0;
            while (j <= n / 2)
            {
                if (i >= j)
                    cout << "* ";
                j += 1;
            }
            cout << endl;
            i += 1;
        }
        i = 0;
        int a = ((n - 1) / 2) - 1;
        while (i <= a)
        {
            int j = 0;
            while (j <= a)
            {
                if (i + j <= a)
                    cout << "* ";
                j += 1;
            }
            cout << endl;
            i += 1;
        }
    }
}