/*
Given an array having n elements representing balls of various colours
like red, white or blue, sort them in-place so that balls of the same
colour are adjacent, with the colours in the order red, white and blue.
To represent the colour red, white, and blue we will use the
integers 0, 1, and 2 respectively.
Note:You are not suppose to use the sort function for this problem.


Input Format:
First line contains integer n as size of array. Next n lines contains a single integer as element of array.


Constraints:
None


Output Format:
Print the balls in order so that balls of same colour are adjacent.


Sample Input:
6
2 0 2 1 1 0

Sample Output:
0 0 1 1 2 2
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // time: n^2
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
