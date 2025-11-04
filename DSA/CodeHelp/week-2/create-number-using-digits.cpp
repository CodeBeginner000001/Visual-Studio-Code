/*
Write a program to create a number by taking individual digits as input from the user.

Input:
  - First, the number of digits n the user wants to enter.
  - Then, n digits (one by one).

Output:
  - Print the number formed by combining all the digits in the same order.

Example 1:
  Input:
    Enter number of digits: 3
    Enter digit 1: 1
    Enter digit 2: 2
    Enter digit 3: 3
  Output:
     123

Example 2:
  Input:
    Enter number of digits: 4
    Enter digit 1: 4
    Enter digit 2: 0
    Enter digit 3: 7
    Enter digit 4: 5
  Output:
     4075
*/
#include <iostream>
using namespace std;
int numberCreated(int n)
{

    int digit, i = 0;
    int num = 0;
    while (i < n)
    {
        cout << "Enter digit " << i + 1 << " : ";
        cin >> digit;
        num = num * 10 + digit;
        i++;
    }
    return num;
}
int main()
{
    int n;
    cin >> n;
    cout << numberCreated(n) << endl;
}
