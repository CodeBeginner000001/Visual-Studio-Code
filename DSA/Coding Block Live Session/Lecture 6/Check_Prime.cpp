
/*
WAP to check if a number is prime or not

Input
13
Output
Prime

Input
10
Output
Not Prime

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 2;
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            cout << "Not Prime";
            break;
        }
        i += 1;
    }
    if (i == n)
    {
        cout << "Prime";
    }
}