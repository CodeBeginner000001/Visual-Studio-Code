/* WAP to print given pattern
Input
4
Output
1
2 3
4 5 6
7 8 9 10

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 0;
    int count = 0;
    while (i <= n - 1)
    {
        int j = 0;
        while (j <= i)
        {
            cout << count + 1 << " ";
            count++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}