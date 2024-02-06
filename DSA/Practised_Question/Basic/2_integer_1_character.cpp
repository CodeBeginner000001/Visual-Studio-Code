/*Take 2 integer as input. Take a character input. if the character
is + sign, print sum of 2 integers. if the character is - sign print
difference of the 2 integers (first-second). Else print -1;*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char ch;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter a character or operator: ";
    cin >> ch;

    if (ch == '+')
    {
        cout << "The sum is :" << a + b << endl;
        cout << "This is because you entered sign ' + '...." << endl;
    }
    else
    {
        if (ch == '-')
        {
            cout << "The sum is :" << a - b << endl;
            cout << "This is because you entered sign ' - '...." << endl;
        }
        else
        {
            cout << "-1" << endl;
            cout << "Wrong character....." << endl;
        }
    }
}