/*
Write a program to make a pattern
Input:
n = 5

Output:
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        int num = i + 1;
        int countTimes = i + 1;
        int startingIndex = 8 - i;
        while (j < 17){
            if(j==startingIndex && countTimes > 0) {
                cout << num;
                startingIndex+=2;
                countTimes--;
            }
            else {
                cout<<"*";
            }
            j++;
        };
        cout << endl;
        i++;
    };
}