/*
Write a program to reverse an array using a while loop.

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
arr = [10, 20, 30]
Output:
[30, 20, 10]
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
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
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