/*
Write a program to calculate and display the area of a circle

Input:
r = 3

Output:
28.27

Input:
r = 5.2

Output:
84.95

Input:
r = 7.75

Output:
188.69

Constraints:
0 < r <= 1000
Radius can be an integer or a decimal number
Output should be rounded to 2 decimal places

Note: Use the formula Area = π * r * r.
*/
#include <iostream>
#include <iomanip>
using namespace std;

float areaOfCircle(double r)
{
    return 3.141592653589793 * r * r;
}
int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(2) << areaOfCircle(r) << endl;
}