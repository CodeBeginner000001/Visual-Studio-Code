/*
Write a program to find the minimum number in an array.

Input:
An array of integers.

Output:
Print the smallest (minimum) number in the array.

Example 1:
Input:
arr = [5, 2, 8, 1, 9]
Output:
1

Example 2:
Input:
arr = [10, 20, 5, 15]
Output:
5
*/
#include <iostream>
#include <limits.h>
using namespace std;
void userInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void minElementArray(int arr[], int size)
{
    int minNumber = INT_MAX;
    int i = 0;
    while (i < size)
    {
        if (arr[i] < minNumber)
            minNumber = arr[i];
        i++;
    }
    cout << minNumber << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    minElementArray(arr, n);
}