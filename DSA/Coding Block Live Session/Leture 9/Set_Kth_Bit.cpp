/*
WAP to set the kth Bit

Input: N=42
       K=4

Output:
58

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; // enter number
    int k;
    cin >> k; // enter number bit you want to change

    cout << (n | (1 << k));

    // other way to write the above statement
    // int mask = 1 << k;
    // cout << (n | mask);
}