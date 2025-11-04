#include <iostream>
using namespace std;
int incrementBy1(int n)
{
    n += 1;
    cout << "function called by value (incrementBy1): " << n << endl;
    return n;
}
int incrementBy1A(int &n)
{
    n += 1;
    cout << "function called by reference (incrementBy1A): " << n << endl;
    return n;
}
int main()
{
    // reference variable
    int n = 5;
    int &b = n; // this is a reference variable it is kind of alias for n
    cout << "n: " << n << endl;
    cout << "b: " << b << endl;

    // call by value
    incrementBy1(n);
    cout << "call by value (main): " << n << endl;

    // call by reference
    incrementBy1A(n);
    cout << "call by reference (main): " << n << endl;
}