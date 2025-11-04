/*
Write a program to make a pattern
Input:
n = 4

Output:
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int num = 0;
    while (i < n)
    {
        int j = 0;
        while (j <= i)
        {
            if (j == i)
                cout << ++num;
            else
                cout << ++num << "*";
            j++;
        }
        cout << endl;
        i++;
    };
    i = n;
    while (i > 0)
    {
        int j = 0;
        int startNumber = num - i;
        while (j < i)
        {
            if (j+1 == i)
                cout << ++startNumber;
            else
                cout << ++startNumber << "*";
            j++;
        }
        num-=i;
        cout << endl;
        i--;
    }
}