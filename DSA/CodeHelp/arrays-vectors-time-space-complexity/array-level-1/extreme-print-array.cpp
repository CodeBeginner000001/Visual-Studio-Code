/*
Write a program to perform extreme print of an array.
(Extreme print means printing the first element, then the last element,
then the second element, then the second last element, and so on.)

Input:
An array of integers.

Output:
Print the elements of the array in extreme order.

Example 1:
Input:
arr = [1, 2, 3, 4, 5]
Output:
1 5 2 4 3

Example 2:
Input:
arr = [10, 20, 30, 40]
Output:
10 40 20 30
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
void extremeArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <=j)
    {
        if(i==j) cout<< arr[i];
        else cout << arr[i] << " " << arr[j] << " ";
        i++;
        j--;
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    extremeArray(arr, n);
}
