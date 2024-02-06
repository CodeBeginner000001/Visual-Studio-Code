#include<stdio.h>
int main()
{
    int i,j,space,rows;
    printf("Enter the no of rows:");
    scanf("%d",&rows);
    for(i=rows;i>=1;i--)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}