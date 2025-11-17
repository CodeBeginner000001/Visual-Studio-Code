/* *
Write a program to print all pairs of elements in an array.

Each element in the array must be paired with every element,
including pairing with itself.

Input:
5
1 2 3 4 5

Output:
(1,1)
(1,2)
(1,3)
(1,4)
(1,5)
(2,1)
(2,2)
(2,3)
(2,4)
(2,5)
(3,1)
(3,2)
(3,3)
(3,4)
(3,5)
(4,1)
(4,2)
(4,3)
(4,4)
(4,5)
(5,1)
(5,2)
(5,3)
(5,4)
(5,5)

Approach: using two loops
-> time complexity : O(n^2)
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
void printAllPairs(int *&arr, int &n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
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
    printAllPairs(arr, n);
}