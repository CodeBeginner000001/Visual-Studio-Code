#include<stdio.h>
int main()
{
    int b,k=1;
    printf("enter tne number of rows u want to print the number:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=i;j++,k++)
        {
            printf("  %d",k);
        }
        printf("\n");
    }
}