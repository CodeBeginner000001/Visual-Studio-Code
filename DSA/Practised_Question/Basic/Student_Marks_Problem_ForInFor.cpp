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
        for (int i = 1; i <= N; i++)
        {
            float sum = 0;
            //  cout << "Marks of student " << i << " :" << endl;
            for (int j = 1; j <= M; j++)
            {
                // cout << "Marks " << j << " :";
                cin >> h;
                sum += h;
            }
            k = sum / M;
            // cout << "The average is: " <<k<< endl;
            cout << k << endl;
        }
    }
    else
    {
        cout << "Enter a valid number...... ";
    }
}
