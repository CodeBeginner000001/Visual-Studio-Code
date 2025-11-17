/*
Write a program to shift (rotate) an array to the right by K positions.
You are given an array of integers and an integer K.
Your task is to rotate the array to the right by K steps.
K can be greater than the size of the array.

Example 1:
Input: nums = [1, 2, 3, 4, 5], K = 2
Output: [4, 5, 1, 2, 3]

Example 2:
Input: nums = [10, 20, 30], K = 5
Explanation: K % 3 = 2
Output: [20, 30, 10]

Example 3:
Input: nums = [7], K = 100
Output: [7]

Approach1: using loops (shiftArrayByK)
-> Time Complexity  : O(n*k)
-> Space Complexity : O(1)

Approach2: using loops (shiftArrayByModK)
-> Time Complexity  : O(n*k)
-> Space Complexity : O(1)

Approach2: using loops (shiftArrayByModK)
-> Time Complexity  : O(n*k)
-> Space Complexity : O(1)

Approach3: using loops (breakInSmallLoops)
-> Time Complexity  : O(n)
-> Space Complexity : O(1)

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

void shiftArrayByK(int *&arr, int &n, int &k)
{
    while (k > 0)
    {
        int i = n - 1;
        int temp = arr[i];
        while (i > 0)
        {
            arr[i] = arr[i - 1];
            i--;
        }
        arr[0] = temp;
        k--;
    }
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
}

void shiftArrayByModK(int *&arr, int &n, int &k)
{
    while (k % n > 0)
    {
        int i = n - 1;
        int temp = arr[i];
        while (i > 0)
        {
            arr[i] = arr[i - 1];
            i--;
        }
        arr[0] = temp;
        k--;
    }
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

void reverseArray(int *&arr, int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void breakInSmallLoops(int *&arr, int &n, int &k)
{
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, k % n - 1);
    reverseArray(arr, k % n, n - 1);
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}
int main()
{
    int n, k;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    cin >> k;
    // shiftArrayByK(arr, n, k);
    // shiftArrayByModK(arr, n, k);
    breakInSmallLoops(arr, n, k);
}
