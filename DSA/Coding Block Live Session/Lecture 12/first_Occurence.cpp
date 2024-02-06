/*
WAP to find the index of the first occurrence of T in the
givenn array.

note: output -1 if T is not present in the given array

Input:

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int i = 0;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int T;
    cin >> T;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == T)
        {
            cout << i;
            break;
        }
    }
    if (i == n)
    {
        cout << "-1";
    }
}