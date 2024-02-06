#include<stdio.h>
int main()
{
    int i,j,space,rows;
    printf("Enter the number to rows for which u want to print reverse pyramid patter:");
    scanf("%d",&rows); 
     for(i=rows;i>=1;i--)
    {
        for(space=1;space<=rows-i;space++)
        {
            printf(" ");

        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}