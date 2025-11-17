/*
Write a program to reverse an array.
You are given an array of integers.
Your task is to reverse the order of the elements in the array
so that the first element becomes last and the last becomes first.

Example 1:
Input: nums = [1, 2, 3, 4, 5]
Output: [5, 4, 3, 2, 1]

Example 2:
Input: nums = [10, 20, 30]
Output: [30, 20, 10]

Example 3:
Input: nums = [7]
Output: [7]

Approach: Two-pointer
-> time complexity: O(n)
-> space complexity: O(1)
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
void reverseArray(int *&arr, int &n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    reverseArray(arr, n);
}