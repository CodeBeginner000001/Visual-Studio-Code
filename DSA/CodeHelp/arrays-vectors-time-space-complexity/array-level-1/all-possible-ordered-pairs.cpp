/*
Write a program to print all possible ordered pairs of elements in an array,
including pairs where the element pairs with itself.

Input:
nums = [1, 2, 3]

Output:
1 1
1 2
1 3
2 1
2 2
2 3
3 1
3 2
3 3

Input:
nums = [4, 5]

Output:
4 4
4 5
5 4
5 5

Input:
nums = [10, 20, 30]

Output:
10 10
10 20
10 30
20 10
20 20
20 30
30 10
30 20
30 30
*/
#include <iostream>
using namespace std;
void userInput(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
}
void possiblePairs(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << arr[i] << " " << arr[j] << endl;
            j++;
        }
        i++;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    userInput(arr, n);
    cout << "********" << endl;
    possiblePairs(arr, n);
}