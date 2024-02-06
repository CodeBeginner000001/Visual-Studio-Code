/*
WAP for Unique_Number

Given a sequence of 2N+1 non-negative numbers where every number is present
twice except for one number which is present only once. Design an algorithm to
find the unique number without using any extra space.

Input: N=7

3 1 4 1 2 3 4

Output: 2

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num;
    int ans = 0;
    int i = 0;
    while (i < n)
    {
        cin >> num;
        ans = ans ^ num;
        i += 1;
    }
    cout << ans;
}