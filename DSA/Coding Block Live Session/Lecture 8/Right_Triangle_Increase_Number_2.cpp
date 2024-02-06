/*
WAP to print given pattern

Input
5
Output
        1
      2 3
    3 4 5
  4 5 6 7
5 6 7 8 9

*/

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int num = i;
    int j = 1;
    while (j <= n)
    {
      if (i + j <= n)
      {
        cout << "  ";
      }
      else
      {
        cout << num << " ";
        num += 1;
      }
      j += 1;
    }
    cout << endl;
    i += 1;
  }
}