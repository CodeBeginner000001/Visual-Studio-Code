/*
Write a program to count the number of 0's and 1's in an array.

Input:
An array containing only 0’s and 1’s.

Output:
Print the count of 0’s and 1’s in the array.

Example 1:
Input:
arr = [0, 1, 0, 1, 1, 0, 0]
Output:
Number of 0's = 4
Number of 1's = 3

Example 2:
Input:
arr = [1, 1, 1, 0, 1]
Output:
Number of 0's = 1
Number of 1's = 4
*/

#include <iostream>
using namespace std;
void count(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
            zeroCount++;
        else
            oneCount++;
    }
    cout << "Number of 0's: " << zeroCount << endl;
    cout << "Number of 1's: " << oneCount << endl;
}
void userInput(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    count(arr, n);
}