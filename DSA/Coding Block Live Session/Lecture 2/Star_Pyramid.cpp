/*
WAP to print the following pattern

Input
5

Output
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

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
        while (j < n)
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
        j = 0;
        while (j <= n - 2)
        {
            if (i > j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}