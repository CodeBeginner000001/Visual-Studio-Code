#include<stdio.h>
void main()
{   char *T;
int i,j,k;
char *ARRAY[5]={"SUNIL","ANIL","DILIP","JAY","BHARAT"};
for(i=0;i<5;i++)
{    printf("%s \t",ARRAY[i]);  }
printf("\n");
for(i=0;i<4;i++)
{
    for(j=0;j<4-i;j++)
    {
     k=strcmp(ARRAY[j],ARRAY[j+1]);
    if(k>0)
    {
      T=ARRAY[j];
      ARRAY[j]=ARRAY[j+1];
      ARRAY[j+1]=T;
     }
    }
    }
    for(i=0;i<5;i++)
    {
     printf("%s \t",ARRAY[i]);
    }
    }

