/*
WAP to count set Bits

Input: N=42

1 0 1 0 1 0

Output: 3

Input: N=5

0 1 0 1

Output: 2

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        count++;
        n &= (n - 1);
    }
    cout << count;
}