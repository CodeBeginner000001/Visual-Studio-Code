/*
WAP to check if number is even or odd

Input: N=10
Output: is even

Input: N=7
Output: is odd
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if ((n & 1) == 1)
        cout << "odd" << endl;
    else
        cout << "even" << endl;
    return 0;
}