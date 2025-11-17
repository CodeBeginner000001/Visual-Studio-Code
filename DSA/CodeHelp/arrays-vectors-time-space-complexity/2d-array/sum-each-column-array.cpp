/*
Write a program to print the sum of each column in a 2D array.
You are given a 2D array (matrix) of integers.
Your task is to calculate the sum of elements in every column
and print the column-wise sums.

Example 1:
Input:
matrix = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]
Output:
12 15 18

Example 2:
Input:
matrix = [
[10, 20],
[30, 40]
]
Output:
40 60

Example 3:
Input:
matrix = [
[5, 1],
[10, 2],
[15, 3]
]
Output:
30 6

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
void sumEachCol(int **&arr, int &n, int &m)
{
    int i = 0;
    while (i < n)
    {
        int j = 0, ans = 0;
        while (j < m)
        {
            ans += arr[j][i];
            j++;
        }
        cout << ans << " ";
        i++;
    }
    cout << endl;
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
    sumEachCol(arr, n, m);
}