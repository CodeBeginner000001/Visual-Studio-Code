/*
WAP to print following pattern
Input
5

Output
* * * * *
* * * * *
* * * * *
* * * * *
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
            cout << "* ";
            j += 1;
        }
        i += 1;
        cout << endl;
    }
}