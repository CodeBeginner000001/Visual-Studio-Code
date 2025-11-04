/*
Write a program to double up each value in an array.

Input:
An array of integers.

Output:
Print the array after doubling each element.

Example 1:
Input:
arr = [1, 2, 3, 4, 5]
Output:
[2, 4, 6, 8, 10]

Example 2:
Input:
arr = [5, -3, 0, 7]
Output:
[10, -6, 0, 14]
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
void doubleArrayElement(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
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
    doubleArrayElement(arr, n);
    printArray(arr, n);
}