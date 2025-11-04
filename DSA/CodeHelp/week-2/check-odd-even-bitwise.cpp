/*
Write a program to check whether a given number is odd or even using bitwise operators.

Input:
7

Output:
odd

Input:
12

Output:
even

Input:
0

Output:
even

Constraints:
-10^9 <= n <= 10^9
You must use bitwise operators, not arithmetic operators.

*/
#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    cout << ((n&1) == 1 ? "odd":"even") << endl;
}