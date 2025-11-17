/*
Write a program to shift (rotate) an array to the right by 1 position.
You are given an array of integers.
Your task is to move every element one step to the right,
and move the last element to the first position.
Example 1:
Input: nums = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Example 2:
Input: nums = [10, 20, 30]
Output: [30, 10, 20]
Example 3:
Input: nums = [7]
Output: [7]

Approach: using loop
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

void shiftArrayBy1(int *&arr, int &n)
{
    int i = n - 1;
    int temp = arr[i];
    while (i > 0)
    {
        arr[i] = arr[i - 1];
        i--;
    }
    arr[0] = temp;
    i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    shiftArrayBy1(arr, n);
}
