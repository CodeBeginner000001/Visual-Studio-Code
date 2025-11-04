/*
Write a program to convert a given temperature from one scale to all other scales.

Supported scales:
  - Celsius (C)
  - Fahrenheit (F)
  - Kelvin (K)

Input:
  - A character 'C', 'F', or 'K' representing the input scale.
  - A number representing the temperature in that scale.

Output:
  - Print the temperature converted to the other two scales with 2 decimal places.

Formulas:
  - Celsius to Fahrenheit: F = (C * 9/5) + 32
  - Celsius to Kelvin: K = C + 273.15
  - Fahrenheit to Celsius: C = (F - 32) * 5/9
  - Fahrenheit to Kelvin: K = (F - 32) * 5/9 + 273.15
  - Kelvin to Celsius: C = K - 273.15
  - Kelvin to Fahrenheit: F = (K - 273.15) * 9/5 + 32

Example 1:
  Input: C 25
  Output: Fahrenheit: 77.00 F, Kelvin: 298.15 K

Example 2:
  Input: F 98.6
  Output: Celsius: 37.00 C, Kelvin: 310.15 K

Example 3:
  Input: K 300
  Output: Celsius: 26.85 C, Fahrenheit: 80.33 F
*/
#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c;
    float temp;
    cin >> c >> temp;
    switch (c)
    {
    case 'C':
        cout << fixed << setprecision(2) << "Fahrenheit: " << (temp * 9 / 5.0) + 32 << " F, Kelvin: " << temp + 273.15 << " K" << endl;
        break;
    case 'F':
        cout << fixed << setprecision(2) << "Celsius: " << (temp - 32) * 5 / 9.0 << " C, Kelvin: " << (temp - 32) * 5 / 9.0 + 273.15 << " K" << endl;
        break;
    case 'K':
        cout << fixed << setprecision(2) << "Celsius: " << temp - 273.15 << " C, Fahrenheit: " << (temp - 273.15) * 9 / 5.0 + 32 << " F" << endl;
        break;
    default:
        cout << "entered wrong temperature scale" << endl;
    }
}