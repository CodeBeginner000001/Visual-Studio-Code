#include <iostream>
using namespace std;
int main()
{
    int a = 25;
    int b = 19;

    cout << "a&b = " << (a & b) << endl;
    cout << "a|b = " << (a | b) << endl;
    cout << "a^b = " << (a ^ b) << endl;
    cout << "~a = " << (~a) << endl
         << endl;

    // left shift
    a = 1;
    cout << "a << 1 =" << (a << 1) << endl;
    cout << "a << 2 =" << (a << 2) << endl;
    cout << "a << 3 =" << (a << 3) << endl;

    // right shift
    a = 8;
    cout << "a >> 1 =" << (a >> 1) << endl;
    cout << "a >> 2 =" << (a >> 2) << endl;
    cout << "a >> 3 =" << (a >> 3) << endl;
    cout << "a >> 4 =" << (a >> 4) << endl;
}