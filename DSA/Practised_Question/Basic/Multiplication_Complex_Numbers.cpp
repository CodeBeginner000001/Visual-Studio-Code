/*
Given the real and imaginary parts of 2 real numbers, print the real and imaginary part of their product

Input Format
you will receive 4 integers in input r1, r2, i1, i2

1<=r1<=1000 1<=r2<=1000 1<=i1<=1000 1<=i2<=1000

Constraints
-2000<=r1<=2000
-2000<=r2<=2000
-2000<=i1<=2000
-2000<=i2<=2000

Output Format
Print two space separated integers where the first integer is the real part and the second is the imaginary part of the product of 2 numbers.

Sample Input
4 -5 -3 7
Sample Output
23 43
Explanation
The product of (4-5i) and (-3+7i) is (23+43i), where i stands for iota
*/

#include <bits/stdc++.H>
using namespace std;
int main()
{
    int r1, r2, i2, i1;
    cin >> r1;
    cin >> i1;
    cin >> r2;
    cin >> i2;
    cout << (r1 * r2) - (i1 * i2) << " " << (r1 * i2) + (r2 * i1);
}