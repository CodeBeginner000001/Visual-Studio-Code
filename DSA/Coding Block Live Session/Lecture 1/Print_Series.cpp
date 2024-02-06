#include <iostream>
using namespace std;
// int main()
// {
//     int a = 2, b = 4;
//     cout << a + b << ", " << a + 2 * b << ", " << a + 3 * b;
// }
// int main()
// {
//     int a = 2, b = 4;
//     int i = 1;
//     while (i <= 3)
//     {
//         cout << a + i * b << endl;
//         i += 1;
//     }
// }
int main()
{
    int a = 2, b = 4, i = 1, c;
    cin >> c;
    while (i <= c)
    {
        cout << a + i * b << endl;
        i += 1;
    }
}