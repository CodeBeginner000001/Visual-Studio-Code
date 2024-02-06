/* Calculator with 5 operations using Switch case Method */
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
    switch (h)
    {
    case 1:
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        cout << "Sum of given numbers: " << a + b;
        break;
    case 2:
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        cout << "Subtraction of given numbers: " << a - b;
        break;
    case 3:
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        cout << "Multiplication of given numbers: " << a * b;
        break;
    case 4:
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        if (b != 0)
            cout << "Division of given numbers: " << a / b;
        else
            cout << "Not defined" << endl;
        break;

    case 5:
        cout << "Enter the first digit: ";
        cin >> a;
        cout << "Enter the second digit: ";
        cin >> b;
        if (b != 0)
            cout << "Modulus of given numbers: " << a % b;
        else
            cout << "Not Defined" << endl;
        break;
    default:
        cout << "-1 ";
        break;
    }
}
