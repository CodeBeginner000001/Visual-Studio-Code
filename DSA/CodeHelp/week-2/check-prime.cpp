/*
Write a program to check given number is prime or not

Input:
3

Output:
prime

Input:
6

Output:
not prime

Input:
19

Output:
prime

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
    cout << (checkPrime(n) ? "prime" : "not prime") << endl;
}