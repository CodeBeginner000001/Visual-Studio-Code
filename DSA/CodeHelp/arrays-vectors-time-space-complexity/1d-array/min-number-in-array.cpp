/*
Write a program to find the minimum number in an array.
You are given an array of integers.
Your task is to scan all the elements and print the smallest (minimum) value in the array.

Example 1:
Input: nums = [5, 3, 9, 1, 7]
Output: 1

Example 2:
Input: nums = [10, 20, 30]
Output: 10

Example 3:
Input: nums = [-2, -5, 0, 4]
Output: -5

Approach: Linear search
-> time complexity: O(n)
-> space complexity: O(1)
*/
#include <iostream>
#include <climits>
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
void findMinNumber(int *&arr, int &n)
{
    int ans = INT_MAX;
    int i = 0;
    while (i < n)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
        i++;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    findMinNumber(arr, n);
}