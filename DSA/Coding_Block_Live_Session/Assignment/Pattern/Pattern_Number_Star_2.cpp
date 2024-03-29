/*
Take as input N, a number. Print the pattern as 
given in the input and output section.

Input Format
Enter value of N

Constraints
1 <= N < 10

Output Format
Print the pattern.

Sample Input
7
Sample Output
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567

Explanation:
There is no space between any two numbers. 
Catch the pattern for corresponding input 
and print them accordingly.

*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <=n;i++)
    {
        int j=1;
        while (j <= n)
        {
            if(i<j)
            {
                cout << "*";
            }
            else{
                cout << j;
            }
            j++;
        }
        cout << endl;
    }
    cout << endl;
}