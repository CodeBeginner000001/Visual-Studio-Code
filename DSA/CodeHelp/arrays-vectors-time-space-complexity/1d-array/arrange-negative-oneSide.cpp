/*
Write a program to rearrange an array so that all negative numbers
appear on the left side and all positive numbers appear on the right side.
The relative order of elements does not matter.
You only need to separate negatives and positives.

Example 1:
Input: nums = [-1, 2, -3, 4, -5]
Output: [-1, -3, -5, 2, 4]

Example 2:
Input: nums = [10, -2, 5, -7, 3]
Output: [-2, -7, 10, 5, 3]

Example 3:
Input: nums = [4, 1, 2]
Output: [4, 1, 2]

Approach 1: using temp arr (arrangeArrayUsingTempArr)
Time Complexity: O(n)
Space Complexity: O(n);

Approach 2: using sorting (arrangeArrayUsingInBuilt)
Time Complexity: O(nlogn)
Space Complexity: O(logn);

Approach 3: using 2 pointer (arrangeArrayBy2Pointer)
Time Complexity: O(n)
Space Complexity: O(1);
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

void arrangeArrayUsingInBuilt(int *&arr, int &n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void arrangeArrayUsingTempArr(int *&arr, int &n)
{
    int index = 0;
    int *newArr = new int[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            newArr[index++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            newArr[index++] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
}

void arrangeArrayBy2Pointer(int *&arr, int &n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] < 0)
        {
            i++;
            continue;
        }
        if (arr[j] >= 0)
        {
            j--;
            continue;
        }
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    // arrangeArrayUsingTempArr(arr, n);
    // arrangeArrayUsingInBuilt(arr, n);
    arrangeArrayBy2Pointer(arr, n);
}