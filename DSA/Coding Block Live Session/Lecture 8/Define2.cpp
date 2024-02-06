#include <iostream>
using namespace std;
#define F                        \
    for (int i = 0; i <= 5; i++) \
    {                            \
        cout << i << " ";        \
    }
#define F2(n)                    \
    for (int i = 0; i <= n; i++) \
    {                            \
        cout << i << " ";        \
    }

int main()
{
    F;
    cout << endl;
    int n;
    cin >> n;
    F2(n);
}