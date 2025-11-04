/*
Insertion Sort

Given an array of  N integers, sort the array using
the insertion sort algorithm.

Example

Input
0  1  2  3  4
50 40 10 30 20

Output
0  1  2  3  4
10 20 30 40 50

The insertion sort algorithm works in passes such
that in its each pass, we place the first element
in the un-sorted part of the array to its correct
position in the sorted part of the array.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}