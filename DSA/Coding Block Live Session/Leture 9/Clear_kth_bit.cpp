/*
WAP to check kth bit

Input: N= 42
       K= 3
Output: 34

Input: N= 5
       K= 0
Output: 4

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    cout << (n & ~(1 << k)) << endl;

    // Another way to write the above statement

    //    int mask = ~(1 << k);
    //    cout << (n & mask) << endl;
}