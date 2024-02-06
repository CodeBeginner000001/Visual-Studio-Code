#include<stdio.h>
int main()
{
    int b;
    printf("enter:");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("  *");
        }
        printf("\n");
    }
}