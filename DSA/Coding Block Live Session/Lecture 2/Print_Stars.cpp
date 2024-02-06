/*
WAP to print given pattern
INPUT
3
OUTPUT
* * *

Input
5
Output
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

        cout << "* ";
        i += 1;
    }
}