/*
Write a program to print all the digits of a given integer separately.

Input:
  - A single integer n.

Output:
  - Print each digit of n on a new line

Example 1:
  Input: 12345
  Output:
    5
    4
    3
    2
    1
Example 2:
  Input: 407
  Output:
    7
    0
    4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n)
    {
        cout << n % 10 << endl;
        n/=10;
    }
}