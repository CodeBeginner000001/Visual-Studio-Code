#include<stdio.h>
double getaverage(int arr[],int size);
int main()
{
int balance[5]= {23,23,23,23,23};
double avg;

avg=getaverage( balance, 5);
printf("average value is:%f",avg);
return 0;
}
double getaverage(int arr[],int size)
{
    int i;
    double avg;
    double sum=0;
    for(i=0;i<size;++i)
    {
        sum+=arr[i];
    }
    avg=sum/size;
    return avg;
}