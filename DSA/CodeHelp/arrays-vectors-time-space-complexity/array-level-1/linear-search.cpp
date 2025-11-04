/*
Write a program to perform a linear search in an array.

Input:
An array of integers and a target value to search for.

Output:
Print Found if found, otherwise print "Not found".

Example 1:
Input:
arr = [4, 7, 1, 9, 3]
target = 9
Output:
Found

Example 2:
Input:
arr = [5, 8, 2, 6]
target = 10
Output:
Not found
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
bool linearSearch(int arr[], int size, int target)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] == target)

            return true;

        i++;
    }
    return false;
}
int main()
{
    int n, target;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    cin >> target;
    cout << (linearSearch(arr, n, target) ? "Found" : "Not Found") << endl;
}
