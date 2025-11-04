/*
Write a program to set the kth bit of a given number n.

Input:
  - Two integers n and k.

Output:
  - Print the number after setting the kth bit of n.

Example 1:
  Input: n = 5, k = 1
  Output: 7
  Explanation: Binary of 5 is 101. Setting the 1st bit gives 111, which is 7.

Example 2:
  Input: n = 8, k = 0
  Output: 9
  Explanation: Binary of 8 is 1000. Setting the 0th bit gives 1001, which is 9.
*/
#include<iostream>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    cout << (n | (1<<k)) << endl;
}