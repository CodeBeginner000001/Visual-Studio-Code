#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int a = (n - 1) / 2;
    if (n % 2 != 0)
    {
        while (i <= a)
        {
            int j = 0;
            while (j <= a)
            {
                if (i + j <= a)
                    cout << "* ";
                else
                    cout << "  ";
                j += 1;
            }
            j = 1;
            while (j <= a)
            {
                if (i <= j)
                    cout << "* ";
                else
                    cout << "  ";
                j += 1;
            }
            cout << endl;
            i += 1;
        }
        i = 1;
        while (i <= a)
        {
            int j = 0;
            while (j <= a)
            {
                if (i >= j)
                    cout << "* ";
                else
                    cout << "  ";
                j += 1;
            }
            j = 1;
            while (j <= a)
            {
                if (i + j >= a)
                    cout << "* ";
                else
                    cout << "  ";
                j += 1;
            }
            cout << endl;
            i += 1;
        }
    }
}