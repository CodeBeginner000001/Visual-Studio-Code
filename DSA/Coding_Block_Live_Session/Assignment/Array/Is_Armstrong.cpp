/*
Take the following as input.

A number
Write a function which returns true if the number is an armstrong number
and false otherwise, where Armstrong number is defined as follows.

A positive integer of n digits is called an Armstrong number of
order n (order is number of digits) if.

abcd… = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ….

1634 is an Armstrong number as 1634 = 1^4 + 6^4 + 3^4 + 4^4

371 is an Armstrong number as 371 = 3^3 + 7^3 + 1^3


Input Format:
Single line input containing an integer


Constraints:
0 < N < 1000000000


Output Format:
Print boolean output for each testcase.
"true" if the given number is an Armstrong Number, else print "false".


Sample Input:
371
Sample Output:
true

Explanation:
Use functions. Write a function to get check if the number is
armstrong number or not. Numbers are armstrong if it is equal to
sum of each digit raised to the power of number of digits.
*/
#include <iostream>
#include <cmath>
using namespace std;

int armstrong(int n)
{
    int m = n;
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    // cout << count << endl;
    int sum = 0;
    while (m > 0)
    {
        int s = m % 10;
        sum += pow(s, count);
        m /= 10;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int a = armstrong(n);
    if (a == n)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    // cout << armstrong(n) << endl;
}