/*
WAP to print given pattern
Inpu
5

Output
*
* *
* * *
* * * *
* * * * *

        *
      * *
    * * *
  * * * *
* * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    while (i <= n - 1)
    {
        int j = 0;
        while (j <= n - 1)
        {
            if (i < j)
                cout << " ";
            else
                cout << "* ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
    cout << endl;
    i = 0;
    while (i <= n - 1)
    {
        int j = 0;
        while (j <= n - 1)
        {
            if (i + j < n - 1)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}