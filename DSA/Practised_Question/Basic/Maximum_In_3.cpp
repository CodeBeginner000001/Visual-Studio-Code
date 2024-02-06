/*Maximum of 3 integers. If all 3 equal print -1. Else print the biggest integer of the 3.*/
#include <bits/stdc++.h> // header file
using namespace std;
int main()
{
    int a, b, c; // initalizing variables
    cout << "Enter the first element: ";
    cin >> a; // user enter first number
    cout << "Enter the second element: ";
    cin >> b; // user enter the second number:
    cout << "Enter the third element: ";
    cin >> c;             // user enter the third number:
    if (a == b && a == c) // if all number are equal
    {
        cout << " -1 "; // print " -1 "
        cout << "\n since all numbers are equal...." << endl;
    }
    else
    {
        if (a > b && a > c) // checks for a
        {
            cout << a << " is maximum amoung three...";
        }
        else
        {
            if (b > a && b > c) // checks for b
            {
                cout << b << " is maximum amoung three...";
            }
            else // if none of the above the last number is maximum
            {
                cout << c << " is maximum amoung three...";
            }
        }
    }
}