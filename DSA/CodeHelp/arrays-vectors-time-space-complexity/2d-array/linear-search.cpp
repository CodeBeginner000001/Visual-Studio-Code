/*
Write a program to perform linear search in a 2D array.
You are given a 2D array (matrix) of integers and a target value.
Your task is to search the matrix and check whether the target value exists.
If the value is found anywhere in the matrix, print 1.
If not found, print 0.

Example 1:
Input:
[
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]
target = 5
Output: 1

Example 2:
Input:
[
[10, 20],
[30, 40]
]
target = 25
Output:
0

Example 3:
Input:
[
[3]
]
target = 3
Output:
1

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
void linearSearch(int **&arr, int &n, int &m, int &target)
{
    bool flag = false;
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            if (arr[i][j] == target)
            {
                flag = true;
                cout << 1;
                break;
            }
            j++;
        }
        if (flag)
            break;
        i++;
    }
    if (!flag)
    {
        cout << 0;
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
    int target;
    cin >> target;
    linearSearch(arr, n, m, target);
}
