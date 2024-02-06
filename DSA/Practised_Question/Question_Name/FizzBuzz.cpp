/*
Given an integer n,
Print "Fizz" if n is a multiple of 3, Print "Buzz" if n in a multiple of 5,
Print "Fizz Buzz" if n is a multiple of both 3 and 5,
Print n if neither 3 nor 5 is a factor.

Input Format
You will receive a single integer n as input

Constraints
1 <= n <= 10^9

Output Format
Print the corresponding string

Sample Input
45
Sample Output
Fizz Buzz
Explanation
Since 45 is divisible by both 3 and 5, we print Fizz Buzz
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 3 == 0 && n % 5 == 0)
        cout << "Fizz Buzz";
    else if (n % 3 == 0)
        cout << "Fizz";
    else
        cout << "Buzz";
}