#include<stdio.h>
# define size 3
int main()
{
    int a1[size][size],a2[size][size],a3[size][size];
    int rows,cols;
    printf("Enter the elements of first matrix(3X3):");
    for(rows=0;rows<size;rows++)
    {
        for(cols=0;cols<size;cols++)
        {
            scanf("%d",&a1[rows][cols]);
        }
    }
    printf("Enter the elements of second matrix(3X3):");
    for(rows=0;rows<size;rows++)
    {
        for(cols=0;cols<size;cols++)
        {
            scanf("%d",&a2[rows][cols]);
        }
    }
    for(rows=0;rows<size;rows++)
    {
      for(cols=0;cols<size;cols++)
      {
          a3[rows][cols]= a1[rows][cols]+a2[rows][cols];
      }
    }
    printf("\nSum of matrices A+B = \n");
    for(rows=0;rows<size;rows++)
    {
        for(cols=0;cols<size;cols++)
        {
            printf("%d\t",a3[rows][cols]);
            
        }
        printf("\n");
    }
}