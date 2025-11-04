/*
Write a program to convert a distance from kilometers (km) to miles.

Input:
  - A number representing distance in kilometers.

Output:
  - Print the distance converted to miles with 2 decimal places.

Formula:
  - 1 kilometer = 0.621371 miles
  - Miles = Kilometers * 0.621371

Example 1:
  Input: 5
  Output: 3.11
  Explanation: 5 km = 5 * 0.621371 = 3.106855 ≈ 3.11 miles

Example 2:
  Input: 10
  Output: 6.21
  Explanation: 10 km = 10 * 0.621371 ≈ 6.21 miles
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float n;
    cin >> n;
    cout << fixed << setprecision(2) << n * 0.621371 << endl;
}