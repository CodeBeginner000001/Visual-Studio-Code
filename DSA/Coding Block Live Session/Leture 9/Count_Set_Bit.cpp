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
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int k = 0;
    while (k < ceil(log2(n + 1)))
    {
        if ((n & (1 << k)) > 0)
            count++;
        k += 1;
    }
    cout << count;
}