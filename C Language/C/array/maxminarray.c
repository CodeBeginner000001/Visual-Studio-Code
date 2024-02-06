#include<stdio.h>
#include<math.h>
int main()
{
    float arr[10000],max,min;
    int size,i;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array:");
    for (i = 0; i < size ; i++)
    {
        scanf("%f",&arr[i]);

    }
    max=min=arr[1];
    for ( i = 0; i < size ; i++)
    {
      if(arr[i]>max)
      {
          max=arr[i];
      }
      else if(arr[i]<min)
      {
          min=arr[i];
      }
  
    }
    printf("\nMax number present in array:%.2f",max);
    printf("\nMin number present in array:%.2f",min);
    
}