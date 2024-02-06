/*
WAP to find the minimum path after reaching a point

Input:

N N N S W W E E E

Output:

1 2
E N N


Input:

S N S N S W E W

Output:

1 1
S W

*/

#include <iostream>
using namespace std;
int main()
{
    char ch;

    int x = 0;
    int y = 0;

    while (true)
    {
        ch = cin.get();

        if (ch == '\n')
        {
            break;
        }
        else if (ch == 'N')
            y++;
        else if (ch == 'S')
            y--;
        else if (ch == 'E')
            x++;
        else // (ch=='W')
            x--;
    }

    cout << abs(x) << " " << abs(y) << endl;

    if (x > 0)
    {
        for (int i = 1; i <= x; i++)
            cout << "E ";
    }
    if (y > 0)
    {
        for (int i = 1; i <= y; i++)
            cout << "N ";
    }
    if (y < 0)
    {
        for (int i = 1; i <= abs(y); i++)
            cout << "S ";
    }
    if (x < 0)
    {
        for (int i = 1; i <= abs(x); i++)
            cout << "W ";
    }
}