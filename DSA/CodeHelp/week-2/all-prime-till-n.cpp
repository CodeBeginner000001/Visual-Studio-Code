/*
Write a program to print all the prime numbers in the range of 1 to n

Input:
5

Output:
1 2 3 5

*/
#include <iostream>
using namespace std;
bool checkPrime(int n)
{
    int i = 2;
    while (i <= sqrt(n))
    {
        if (n % i == 0)
            return false;
        i++;
    };
    return true;
}
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (checkPrime(i))
            cout << i << " ";
        i++;
    }
}