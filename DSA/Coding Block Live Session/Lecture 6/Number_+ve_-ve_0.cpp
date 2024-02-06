/*
WAP to check if a number is positive , negative or zero

Input
5
Output
+ve

Input
-5
Output
-ve

Input
0
Output
0

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n > 0 ? cout << "+ve" : n < 0 ? cout << "-ve"
                                  : cout << "0";
}