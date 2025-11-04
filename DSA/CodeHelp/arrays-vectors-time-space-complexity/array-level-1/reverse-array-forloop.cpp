/*
Write a program to reverse an array using a for loop.

Input:
An array of integers.

Output:
Print the array in reverse order.

Example 1:
Input:
arr = [1, 2, 3, 4, 5]
Output:
[5, 4, 3, 2, 1]

Example 2:
Input:
arr = [7, 9, 11, 13]
Output:
[13, 11, 9, 7]
*/
#include <iostream>
using namespace std;
void userInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void reverseArray(int arr[], int size)
{
    for (int left = 0, right = size - 1; left <= right; left++, right--)
    {
        swap(arr[left], arr[right]);
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);
}