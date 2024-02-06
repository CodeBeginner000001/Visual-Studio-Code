/*
WAP to check if a student is pass or fail in an exam

Input      Input
45         35
Output     Output
Pass       Fail

If a student scores more than or equal to 40 then pass
and if not fail
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n >= 40 ? cout << "Pass" : cout << "Fail";
}