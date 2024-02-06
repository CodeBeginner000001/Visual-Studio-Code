/*Print a right triangular pattern using binary code
Input
5
Output
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
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
        while (j <= i)
        {
            i % 2 == 0 ? j % 2 == 0 ? cout << "1 " : cout << "0 " : j % 2 == 0 ? cout << "0 "
                                                                               : cout << "1 ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}