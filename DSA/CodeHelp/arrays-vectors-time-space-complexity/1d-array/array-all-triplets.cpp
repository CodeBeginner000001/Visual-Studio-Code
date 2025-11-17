/*
Write a program to print all possible triplets of an array.

Each element must be combined with every other element,
including pairing with itself, and repetitions are allowed.

Input:
nums = [1, 2, 3]

Output:
(1,1,1)
(1,1,2)
(1,1,3)
(1,2,1)
(1,2,2)
(1,2,3)
(1,3,1)
(1,3,2)
(1,3,3)
(2,1,1)
(2,1,2)
(2,1,3)
(2,2,1)
(2,2,2)
(2,2,3)
(2,3,1)
(2,3,2)
(2,3,3)
(3,1,1)
(3,1,2)
(3,1,3)
(3,2,1)
(3,2,2)
(3,2,3)
(3,3,1)
(3,3,2)
(3,3,3)

Approach: using three loops
-> time complexity : O(n^3)
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
void printAllPossible(int *&arr, int &n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            int k = 0;
            while (k < n)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                k++;
            }
            j++;
        }
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    userInput(arr, n);
    printAllPossible(arr, n);
}