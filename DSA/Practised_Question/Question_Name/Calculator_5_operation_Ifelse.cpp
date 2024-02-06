/* Calculator with 5 operations using if case Method */
#include <iostream>
using namespace std;
int main()
{
    int h;
    int a, b;
    cout << "1. Addition.." << endl;
    cout << "2. Subtraction.." << endl;
    cout << "3. Multiplication.." << endl;
    cout << "4. Division.." << endl;
    cout << "5. Modulus.." << endl;
    cout << "Select any one of them.... : ";
    cin >> h;
    if (h == 1)
    {
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        cout << "Sum of given numbers: " << a + b;
    }
    else if (h == 2)
    {
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        cout << "Subtraction of given numbers: " << a - b;
    }
    else if (h == 3)
    {
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        cout << "Multiplication of given numbers: " << a * b;
    }
    else if (h == 4)
    {
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        if (b != 0)
            cout << "Division of given numbers: " << a / b;
        else
            cout << "Not Defined..." << endl;
    }
    else if (h == 5)
    {
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        if (b != 0)
            cout << "Modulus of given numbers: " << a % b;
        else
            cout << "Not Defined..." << endl;
    }
    else
    {
        cout << "-1 ";
    }
}