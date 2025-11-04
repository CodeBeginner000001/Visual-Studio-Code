/*
Write a program to find factorial for a given number
Input:
5
Output: 
120

Input:
4
Output:
24
*/
#include<iostream>
using namespace std;

int factorial(long long n){
    if(n<=1) return 1;
    return n * factorial(n-1);
}

int main() {
    long long  n;
    cin>>n;
    cout<< factorial(n) << endl;
}