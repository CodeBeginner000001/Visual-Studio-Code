/*
Write a program to sort a binary array consisting only of 0s and 1s.

You are given an array of integers where each element is either 0 or 1.
Your task is to rearrange the array so that all 0s appear before all 1s.

You may modify the array in-place.

Example 1:
Input:
nums = [0, 1, 1, 0, 1]

Output:
[0, 0, 1, 1, 1]

Example 2:
Input:
nums = [1, 1, 0, 0, 0]

Output:
[0, 0, 0, 1, 1]

Example 3:
Input:
nums = [0, 0, 1, 1]

Output:
[0, 0, 1, 1]

Approach: using counting (sortByCounting)
-> time complexity : O(n)
-> space complexity : O(1)

Approach: using inbuilt sorting (sortBysorting)
-> time complexity : O(nlogn)
-> space complexity : O(1)

Approach: using 2 pointer (sortBy2Pointer)
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

void sortByCounting(int *&arr, int &n)
{
    int i = 0;
    int count1 = 0, count0 = 0;
    while (i < n)
    {
        switch (arr[i])
        {
        case 1:
            count1++;
            break;
        case 0:
            count0++;
            break;
        default:
            break;
        }
        i++;
    }
    while ((count0--) > 0)
    {
        cout << 0 << " ";
    }
    while (count1-- > 0)
    {
        cout << 1 << " ";
    }
    cout << endl;
}

void sortBysorting(int *&arr, int &n)
{
    sort(arr, arr + n);
    int i = 0;
    while (i < n)
    {
        cout << arr[i] << endl;
        i++;
    }
}

void sortBy2Pointer(int *&arr, int &n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j--;
        }
        else
        {
            i++;
        }
    }
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
    // sortByCounting(arr, n);
    // sortBysorting(arr, n);
    sortBy2Pointer(arr, n);
}