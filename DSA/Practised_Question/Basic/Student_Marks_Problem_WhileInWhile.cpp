/*
Q1
N students(take n,m input). For each student, M marks will be given as input

Input
5 3
10 5 7      22/3  => 7.333
9 3 7        19/3 =>  6.333
6 7 3
2 5 4
9 6 3

Input
3 5
10 5 3 4 6
4 3 9 5 6
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    float h, k;

    // cout << "Enter No of Student's Data you  want to enter: ";
    cin >> N;

    // cout << "No of Marks you want to enter for each student: ";
    cin >> M;
    if (N > 0 && M > 0)
    {
        int i = 1;
        while (i <= N)
        {
            float sum = 0;
            //  cout << "Marks of student " << i << " :" << endl;
            int j = 1;
            while (j <= M)
            {
                // cout << "Marks " << j << " :";
                cin >> h;
                sum += h;
                j++;
            }
            k = sum / M;
            // cout << "The average is: " <<k<< endl;
            cout << k << endl;
            i++;
        }
    }
    else
    {
        cout << "Enter a valid number...... ";
    }
}
