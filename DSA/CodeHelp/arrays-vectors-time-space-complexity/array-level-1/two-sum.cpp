/*
Write a program to find indices of two numbers in an array
such that they add up to a specific target.

Input:
nums = [2, 7, 11, 15]
target = 9
Output:
[0, 1]

Example 2:
Input:
nums = [3, 2, 4]
target = 6
Output:
[1, 2]

Example 3:
Input:
nums = [3, 3]
target = 6
Output:
[0, 1]

*/
#include <iostream>
using namespace std;
void userInput(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
}
void targetPair(int arr[], int n, int target)
{
    int i = 0, flag = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n)
        {
            if (flag)
                break;
            if (arr[i] + arr[j] == target)
            {
                flag = 1;
                cout << "[" << i << ", " << j << "]" << endl;
            }
            j++;
        }
        i++;
    }
    if (!flag)
        cout << "Not Found";
}
int main()
{
    int n, target;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    cin >> target;
    targetPair(arr, n, target);
}