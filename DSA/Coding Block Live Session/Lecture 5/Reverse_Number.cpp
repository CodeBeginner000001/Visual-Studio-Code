/*
WAP to reverse the order of the number entered

Input
123
Output
321

Corner Case

Input
1000

Output
1

logic Case
0001
*/
#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    while (n > 0)
    {
        int d = n % 10;
        if (d == 0)      // Corner Case
        {                // Input- 1000
            cout << "0"; // Output - 1
        }                // logical answer - 0001
        ans = ans * 10 + d;
        n /= 10;
    }
    cout << ans;
}