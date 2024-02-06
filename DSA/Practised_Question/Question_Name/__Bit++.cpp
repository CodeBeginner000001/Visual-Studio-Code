/*
Bitland's classic programming language is called Bit++. This language has a unique and complex structure. It contains only one variable, which is called "x", and two operations: "++" and "--". The operation "++" increases the value of "x" by 1, and the operation "--" decreases the value of "x" by 1. A statement in Bit++ consists of only one operation and the variable "x", written without spaces. Executing a statement means performing the operation it contains. A program in Bit++ is a sequence of statements that need to be executed one after the other. The execution of a program means executing all the statements it contains, starting from an initial value of "x" equal to 0. Your task is to execute the program and find the final value of "x" when the program has finished executing.

Input Format
The input consists of an integer n (1 ≤ n ≤ 150), which represents the number of statements in the program. Following this, there are n lines, each containing a single statement. Each statement consists of one of two operations, "++" or "--", and the variable "x", represented by the letter "X". The operation and variable can appear in any order within the statement, and there are no empty statements.

Constraints
1 ≤ n ≤ 150

Output Format
Print a single integer — the final value of x.

Sample Input
7
X--
++X
X++
++X
--X
--X
X--
Sample Output
-1
Explanation
Value of X after Statement 1 : -1
Value of X after Statement 1 : 0
Value of X after Statement 1 : 1
Value of X after Statement 1 : 2
Value of X after Statement 1 : 1
Value of X after Statement 1 : 0
Value of X after Statement 1 : -1
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a, b, c;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;

        if (b == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x;
}
