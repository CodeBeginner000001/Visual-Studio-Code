#include <iostream>
using namespace std;
int main()
{
    // Get size of any datatype
    int a = 10;
    int size = sizeof(a);
    cout << "Size of Integer datatype is : " << size << " byte which is " << size * 8 << " bits" << endl;

    // from string to integer
    int d = 'f';
    cout << "ASCII TABLE value of f is : " << d << endl;

    // from integer to string
    char c = 97;
    cout << "ASCII TABLE value at 97 is : " << c << endl;

    // Norrowing Conversion from int to char
    char b = 123456;
    cout << b << endl;

    // storing and display negative number
    int v = -5;
    cout << "Negative number : " << v << endl;

    // only to store positive number
    unsigned int x = 6;
    cout << "Unsigned value of x : " << x << endl;

    // trying to store a negative value in unsigned int
    unsigned int z = -8;
    cout << "Unsigend value of z which is (-8) is : " << z << endl;

    int l = 5.5;
    int p = 4.5;
    cout<< "5.5 -> " << l << endl;
    cout<< "4.5 -> " << p << endl;
}