/*
WAP to sum the digit the number

Input
123
Output
6

Input
1000
Output
1
*/

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    while (n > 0)
    {
        int d = n % 10;
        sum += d;
        n /= 10;
    }
    cout << sum;
}