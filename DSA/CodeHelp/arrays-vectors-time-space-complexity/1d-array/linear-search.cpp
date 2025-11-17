/*
Write a program to perform a linear search on an array.

You are given an array of integers and a target value.
Your task is to search for the target in the array by checking
each element one by one from left to right.

If the target is found, print its index.
If the target is not found, print -1.

Example 1:
Input:
nums = [5, 8, 2, 9, 3]
target = 9

Output:
3

Example 2:
Input:
nums = [4, 1, 7, 2]
target = 5

Output:
-1

Example 3:
Input:
nums = [10, 20, 30, 40]
target = 10

Output:
0

Approach: using loops
-> time complexity : O(n)
-> space complexity : O(1)
*/
#include <iostream>
using namespace std;
void userInput(int *&arr, int &n)
{
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
}
void linearSearch(int *&arr, int &n, int &target)
{
    int i = 0;
    bool flag = false;
    while (i < n)
    {
        if (arr[i] == target)
        {
            cout << i << endl;
            flag = true;
            break;
        }
        i++;
    }
    if (!flag)
        cout << "-1" << endl;
}
int main()
{
    int n, target;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    cin >> target;
    linearSearch(arr, n, target);
}