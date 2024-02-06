#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to find if odd or even:");
    scanf("%d",&num);
    (num%2==0)?printf("The number is even:%d",num):printf("the number is odd:%d",num);
}