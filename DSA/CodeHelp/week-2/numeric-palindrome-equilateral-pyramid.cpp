/*
Write a program to make a pattern
Input:
n = 5

Output:
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i=0;

    while(i<n){
        int j=0;
        while(j < n){
            if(i+j>=n-1) cout<< i + j - (n-2) <<" ";
            else cout<< "  ";
            j++;
        };
        j=1;
        while(j < n) {
            if(i==j || i >=j) cout<< i - j + 1 << " ";
            else cout<< "  ";
            j++;
        }
        cout<<endl;
        i++;
    };
}