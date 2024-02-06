/*
You are given a principal amount P which will be contributed annually by a user for T years. For a rate of interest R, calculate the final amount(not only the interest) the user will receive after T years.
Note: The amount is donated in the beginning of the year and the interest is added at the end of the year

Input Format
Their will 3 space separated integers P R T, P is the principal amount which is donated every year for T years. R is the rate of interest

Constraints
1<=P<=10000
1<=R<=100
1<=T<=80

Output Format
Output the total amount the user gets after the total time.

Sample Input
100 15 3
Sample Output
399
Explanation
After year 1, investment is 100, interest is 15. Total= 115
Now as year 2 starts, another investment of 100 is done.
After year 2, investment is 215, interest is 32.25(considering floor value of 32). Total=247
Now as year 3 starts, another investment of 100 is done.
After year 3, investment is 347, interest is 52.0875(considering floor value of 52). Total=399
So after 3 years, total amount=399
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, r, t, h;
    int sum = 0;
    cin >> p >> r >> t;
    while (t--)
    {
        sum += p;
        h = sum * r / 100;
        sum += h;
    }
    cout << sum;
}
