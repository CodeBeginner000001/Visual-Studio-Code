/*
Write a program to find the maximum number in a 2D array.
You are given a 2D array (matrix) of integers.
Your task is to scan all elements in the matrix and print the maximum (largest) value.

Example 1:
Input:
matrix = [
[1, 2, 3],
[4, 9, 6],
[7, 8, 5]
]
Output:
9

Example 2:
Input:
matrix = [
[10, 20],
[3, 4]
]
Output:
20

Example 3:
Input:
matrix = [
[-5, -2],
[-9, -1]
]
Output:
-1

Approach: using loops
-> time complexity : O(n*m)
-> space complexity : O(1)
*/
#include <iostream>
#include <climits>
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
void maxNumberArray(int **&arr, int &n, int &m)
{
    int ans = INT_MIN;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            if (arr[i][j] > ans)
            {
                ans = arr[i][j];
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
    maxNumberArray(arr, n, m);
}