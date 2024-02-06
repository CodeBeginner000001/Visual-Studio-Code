
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
    int i = 2, n;
    cin >> n;
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            cout << "Not Prime ";
            return 0;
        }
        i += 1;
    }
    cout << "Prime ";
}