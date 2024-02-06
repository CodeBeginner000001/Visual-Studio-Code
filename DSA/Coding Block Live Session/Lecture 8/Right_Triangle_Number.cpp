/* WAP to print given pattern
Input
3
Output
1
1 2
1 2 3

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i <= n - 1)
    {
        int j = 0;
        while (j <= n)
        {
            if (i < j)
            {
                cout << "  ";
            }
            else
            {
                cout << j + 1 << " ";
            }
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}