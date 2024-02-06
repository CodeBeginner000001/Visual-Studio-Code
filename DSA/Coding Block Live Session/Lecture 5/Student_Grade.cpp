/*
WAP to Grade student according to their numbers

Marks         Grade
50>             F
50< && <=60     E
60< && <=70     D
70< && <=80     C
80< && <=90     B
90< && <=100    A
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n > 90 && n <= 100)
        cout << "A ";
    else if (n > 80 && n <= 90)
        cout << "B ";
    else if (n > 70 && n <= 80)
        cout << "C ";
    else if (n > 60 && n <= 70)
        cout << "D ";
    else if (n > 50 && n <= 60)
        cout << "E ";
    else if (n > 100)
        cout << "Enter a valid Number......";
    else
        cout << "F ";
}