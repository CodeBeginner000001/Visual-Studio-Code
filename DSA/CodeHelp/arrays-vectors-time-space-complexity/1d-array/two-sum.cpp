/*
Write a program to find two numbers in an array that add up to a given target.

You are given an array of integers nums and an integer target.
Your task is to return the indices of the two numbers such that
they add up to the target value.

You may assume:

Exactly one valid pair exists.

You cannot use the same element twice.

The answer may be returned in any order.

Input:
nums = [2, 7, 11, 15], target = 9

Output:
[0, 1]

Input:
nums = [3, 2, 4], target = 6

Output:
[1, 2]

Input:
nums = [3, 3], target = 6

Output:
[0, 1]

Approach: using two loops
-> time complexity : O(n^2)
-> space complexity : O(1)
*/
#include <iostream>
#include <vector>
using namespace std;
void userInput(vector<int> &arr, int &n)
{
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
}
void findSumPairs(vector<int> &arr, int &target)
{
    int n = arr.size();
    int i = 0;
    int last = -1;
    while (i < n)
    {
        int key = target - arr[i];
        int j = i + 1;
        while (j < n)
        {
            if (arr[j] == key)
            {
                last = j;
                break;
            }
            j++;
        }
        if (last >= 0)
        {
            arr.clear();
            arr.push_back(i);
            arr.push_back(j);
            cout << arr[0] << " " << arr[1] << endl;
            break;
        }
        i++;
    }
}
int main()
{
    int n, target;
    cin >> n;
    vector<int> arr(n, 0);
    userInput(arr, n);
    cin >> target;
    findSumPairs(arr, target);
}