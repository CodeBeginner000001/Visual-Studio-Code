#include<stdio.h>
int main()
{
    int n;
    float arr[1000],sum=0;
    int i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of elements of array:%.2f",sum);
}