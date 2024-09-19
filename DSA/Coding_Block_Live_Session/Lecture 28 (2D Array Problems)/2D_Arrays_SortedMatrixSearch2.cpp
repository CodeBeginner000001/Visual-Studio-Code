#include <iostream>
using namespace std;
// staircase algorithm 
// time complexity: O(m+n)
bool isPresent(int mat[][3], int m, int n, int t)
{
    int i = 0;
    int j = n - 1;
    while (i <=m-1 and j >= 0)
    {
        if (mat[i][j] == t)
            return true;
        else if (t > mat[i][j])
            i++;
        else
            j--;
    }
    return false;
}

int main()
{
    int mat[][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int m = 3;
    int n = 3;

    int t = 20;
    isPresent(mat, m, n, t) ? cout << "Found" : cout << "Not Found";
    cout << endl;
}