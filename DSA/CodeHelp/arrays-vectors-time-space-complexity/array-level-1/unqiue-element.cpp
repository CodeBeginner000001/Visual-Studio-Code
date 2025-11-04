/*
Write a program to find the unique element in an array
where all other elements appear twice.

Input:
[1, 2, 3, 2, 1]
Output:
3

Input:
[4, 5, 5, 6, 6]
Output:
4

Input:
[7, 8, 7, 9, 9]
Output:
8

*/
#include <iostream>
using namespace std;
void userInput(int arr[], int n)
{
    while (n)
    {
        cin >> arr[n];
        n--;
    }
}
void unquieElement(int arr[], int n)
{
    int ans = 0;
    while (n)
    {
        ans ^= arr[n];
        n--;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    unquieElement(arr, n);
}
