#include <iostream>
using namespace std;
void printArray(int vrr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "* " << vrr[i] << endl;
    }
}
int main()
{
    int arr[10];
    cout << "Size of arr: " << sizeof(arr) << endl;
    cout << "Element in the arr: " << sizeof(arr) / sizeof(int) << endl;
    cout << "base address of arr without &: " << arr << endl;
    cout << "base address of arr: " << &arr << endl;
    // How to initialize an array
    int arr1[] = {2, 3, 4, 56, 3};
    int brr[5] = {1, 2, 3, 4, 5};
    bool crr[5] = {true, false};
    // char drr[2] = {'a', 'b', 'c', 'd', 'e'}; // excess element in array

    // print the array
    for (int i = 0; i < sizeof(brr) / sizeof(int); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
    // Input for a array
    int vrr[5];
    for (int i = 0; i < sizeof(vrr) / sizeof(int); i++)
    {
        cout << "Enter the value for index " << i << ": ";
        cin >> vrr[i];
        cout << endl;
    }
    for (int i = 0; i < sizeof(vrr) / sizeof(int); i++)
    {
        cout << vrr[i] << " ";
    }
    cout << endl;
    printArray(vrr, sizeof(vrr) / sizeof(int));
}