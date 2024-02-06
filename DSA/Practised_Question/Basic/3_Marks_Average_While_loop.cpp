/*
Q2) N students(take n input). For each student, 3 marks will be given as input

Input
5
10 5 7      22/3  => 7.333
9 3 7        19/3 =>  6.333
6 7 3
2 5 4
9 6 3

Output
7.333
6.333
5.333
3.667
6
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    // cout << "Enter how many Student data u want to enter: ";
    cin >> n;
    float g;
    int i = 1;
    if (n > 0)
    {
        while (i <= n)
        {
            float a, b, c;
            // cout << "Enter marks of Student " << i << endl;
            cin >> a;
            cin >> b;
            cin >> c;
            g = (a + b + c) / 3;
            // cout << "The average of 3 marks is: " << g << endl;
            cout << g << endl;
            i++;
        }
    }
    else
    {
        cout << " Please enter more than zero number Or non negative number......" << endl;
    }
}
