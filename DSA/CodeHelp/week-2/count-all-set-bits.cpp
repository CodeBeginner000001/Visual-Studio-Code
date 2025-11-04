/*
Write a program to count all the set bits (1s) in the binary representation of a given integer.

Input:
  - A single integer n.

Output:
  - Print the total number of set bits in n.

Example 1:
  Input: 5
  Output: 2
  Explanation: Binary of 5 is 101. It has 2 set bits.

Example 2:
  Input: 15
  Output: 4
  Explanation: Binary of 15 is 1111. It has 4 set bits.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n)
    {
        if ((n & 1) == 1)
            count++;
        n >>= 1;
    }
    cout << count << endl;
}