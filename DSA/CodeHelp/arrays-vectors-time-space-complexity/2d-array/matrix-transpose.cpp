/*
Write a program to find the transpose of a matrix.
You are given a 2D array (matrix) of integers with rows and cols.
Your task is to print the transpose of the matrix.
In the transpose, each element at position (i, j) moves to (j, i).
Example 1:
Input:
matrix = [
[1, 2, 3],
[4, 5, 6]
]
Output:
[
[1, 4],
[2, 5],
[3, 6]
]
Example 2:
Input:
matrix = [
[10, 20],
[30, 40]
]
Output:
[
[10, 30],
[20, 40]
]
Example 3:
Input:
matrix = [
[7]
]
Output:
[
[7]
]

Approach1: temp arr loop based
Time Complexity: O(n*m)
Space Complexity: O(n*m)

Approach2: swapping based
Time Complexity: O(n*m)
Space Complexity: O(1)
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

void matrixTransposeTempArr(int **&arr, int &n, int &m)
{
    int **tempArr = new int *[m];
    for (int i = 0; i < m; i++)
    {
        tempArr[i] = new int[n];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tempArr[i][j] = arr[j][i];
        }
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << tempArr[i][j] << " ";
        }
        cout << endl;
    }
}

void matrixTransposeSwap(int **&arr, int &n, int &m)
{
    if (n != m)
    {
        cout << "In-place transpose possible only for square matrices" << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
    // matrixTransposeTempArr(arr, n, m);
    matrixTransposeSwap(arr, n, m);
}
