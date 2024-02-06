/*
WAP to print given pattern

Input
5
Output
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
    int n;
    cin >> n;
    int i = 0;
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
        cout << endl;
        i += 1;
    }
}