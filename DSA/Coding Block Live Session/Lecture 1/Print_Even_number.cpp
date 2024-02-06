/*
WAP to print the series of even number

Input
5

Output
0 2 4
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cin >> n;
    while (i <= n)
    {
        cout << i << " ";
        i = i + 2;
    }
}
// int main()
// {
//     int n, i = 0;
//     cin >> n;
//     while (i <= n)
//     {
//         if (i % 2 == 0)
//             cout << i << " ";
//         i += 1;
//     }
// }