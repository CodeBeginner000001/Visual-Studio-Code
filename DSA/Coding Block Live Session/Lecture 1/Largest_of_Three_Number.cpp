/*
WAP to find the largest number in the three number

Input
5 8 1

Output
8

Input
-2 0 -10

Output
0
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number to find: " << endl;
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}
