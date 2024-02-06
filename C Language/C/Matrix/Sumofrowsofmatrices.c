#include<stdio.h>
# define size 3
int main()
{
    int rows,cols,sr,a[size][size],c[rows][cols];
    printf("Enter the matrix for sum of rows:");
    for(rows=0;rows<size;rows++)
    {
        for(cols=0;cols<size;cols++)
        {
            scanf("%d",&a[rows][cols]);
        }
    }
    
     for(rows=0;rows<size;rows++)
    {
        sr=0;
        for(cols=0;cols<size;cols++)
        {
            sr+=a[rows][cols];
            
        }
       
        
    } 
    printf("\t%d\t",sr);
    
    
}