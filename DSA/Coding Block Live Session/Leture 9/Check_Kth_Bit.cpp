/*
WAP a check kth bit

42

1 0 1 0 1 0

Input: N=42  k=3
Output: True

Input: N=42  k=4
Output: False

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    (n & (1 << k)) ? cout << "True " : cout << "False ";
}