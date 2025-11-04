/*
Write a program to print all possible triplets of elements in an array,
including triplets where elements can repeat.

Input:
nums = [1, 2, 3]

Output:
1 1 1
1 1 2
1 1 3
1 2 1
1 2 2
1 2 3
1 3 1
1 3 2
1 3 3
2 1 1
2 1 2
2 1 3
2 2 1
2 2 2
2 2 3
2 3 1
2 3 2
2 3 3
3 1 1
3 1 2
3 1 3
3 2 1
3 2 2
3 2 3
3 3 1
3 3 2
3 3 3

Input:
nums = [4, 5]

Output:
4 4 4
4 4 5
4 5 4
4 5 5
5 4 4
5 4 5
5 5 4
5 5 5

Input:
nums = [10, 20]

Output:
10 10 10
10 10 20
10 20 10
10 20 20
20 10 10
20 10 20
20 20 10
20 20 20
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
    int arr[n];
    userInput(arr, n);
    cout << "********" << endl;
    possiblePairs(arr, n);
}