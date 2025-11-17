/*
Write a program to find the sum of the diagonal elements of a 2D array.
You are given a square matrix (same number of rows and columns).
Your task is to calculate and print the sum of the main diagonal elements
(the elements where row index == column index).

Example 1:
Input:
matrix = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]
Output:
15
Explanation: 3 + 5 + 7 = 15

Example 2:
Input:
matrix = [
[2, 3, 8, 5],
[9, 10, 4, 2],
[3, 8, 5, 10],
[9, 20, 4, 7]
]
Output:
26
Explanation: 9 + 8 + 4 + 5 = 26

Example 3:
Input:
matrix = [
[10, 20],
[30, 40]
]
Output:
50
Explanation: 20 + 30 = 50

Example 4:
Input:
matrix = [
[5]
]
Output:
5


Approach: using loops
-> time complexity : O(n*m)
-> space complexity : O(1)
*/
#include <iostream>
using namespace std;
void userInput(int **&arr, int &n, int &m)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            cin >> arr[i][j];
            j++;
        }
        i++;
    }
}
void diagonalSum(int **&arr, int &n, int &m)
{
    int i = 0, ans = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            if (i + j == m-1)
            {
                ans += arr[i][j];
            }
            j++;
        }
        i++;
    }
    cout << ans << endl;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    userInput(arr, n, m);
    diagonalSum(arr, n, m);
}