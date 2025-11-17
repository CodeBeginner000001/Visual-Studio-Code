/*
Write a program to find the unique element in an array.

In the given array, every element appears exactly twice except one element,
which appears only once. Your task is to identify and print that unique element.

Input:
[2, 3, 5, 3, 2]

Output:
5

Input:
[10, 1, 1, 2, 2]

Output:
10

Input:
[7, 8, 7]

Output:
8

Approach: using Bitwise XOR operator
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
void findUniqueElement(int *&arr, int &n)
{
    int i = 0;
    int ans = 0;
    while (i < n)
    {
        ans ^= arr[i];
        i++;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    findUniqueElement(arr, n);
}