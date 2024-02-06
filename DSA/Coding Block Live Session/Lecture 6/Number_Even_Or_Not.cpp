/*
WAP to check if a number is even or not

Input
5
Output
Not Even Number

Input
4
Output
Even Number

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int j = n % 2 == 0 ? 1 : 0;
    j == 1 ? cout << "Even Number" : cout << "Not Even Number";
}