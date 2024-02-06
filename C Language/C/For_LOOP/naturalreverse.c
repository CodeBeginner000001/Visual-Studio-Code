#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number for which you want to see the natural number in reverse:");
    scanf("%d",&a);
    for(int i=a; i>=0;i--)
    {
        printf("\n%d",i);
    }

}