/*
Write a program to perform extreme print on an array.
Extreme print means printing elements from both ends of the array alternately:
first the first element, then the last element,
then the second element, then the second last element, and so on.

Example 1:
Input: nums = [1, 2, 3, 4, 5]
Output: 1 5 2 4 3

Example 2:
Input: nums = [10, 20, 30, 40]
Output: 10 40 20 30

Example 3:
Input: nums = [7]
Output: 7

Approach: Two-pointer method
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
void extremePrint(int *&arr, int &n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (i == j)
        {
            cout << arr[i];
            break;
        }
        cout << arr[i] << " " << arr[j] << " ";
        i++;
        j--;
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    extremePrint(arr, n);
}