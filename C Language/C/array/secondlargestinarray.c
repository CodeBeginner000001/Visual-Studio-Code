#include<stdio.h>
#include<limits.h>
int main()
{
    int size,i,arr[1000];
    float max1,max2;
    printf("Enter the size of array(1-1000): ");
    scanf("%d",&size);
    printf("Enter the elements of array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    max1=max2=INT_MIN;
    for(i=0;i<size;i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
    printf("\nThe first largest number in array:%.2f",max1);
    printf("\nThe second largest number in array:%.2f",max2);
}