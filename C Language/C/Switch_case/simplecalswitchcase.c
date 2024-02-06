#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  char d;
  float ans=0;
  float a;
  float o,l,N;
  float sum=0;
  float p=1;
  printf("\n\nChoose from the following(a-e):-");
  printf("\na. Addition\tb. Subtraction\tc. Multiplication\td. Division\te. Percentage");
  printf("\nEnter :");
  scanf("%c",&d);
  switch(d)
  {
    case 'a': printf("You have chosen Additon");
              printf("\nEnter how many times you want to enter:");
              scanf("%d",&n);
                for(int i=1; i<=n;i++)
                {
                 printf("Enter number:");
                 scanf("%f",&a);
                 sum=sum+a; 
                }
                printf("Sum of entered numbers: %.2f",sum);
                break;

    case 'b': printf("You have chosen Subtraction");
              printf("\nEnter how many times you want to enter:");
              scanf("%d",&n);
                for(int i=1; i<=n;i++)
                {
                 printf("Enter number:");
                 scanf("%f",&a);
                 if(i==1)
                 {
                     ans+=a;
                 }
                 else
                 {
                    ans-=a;
                 }
                }
                if(ans<0)
                {
                    printf("Sub of the entered number : %.2f", (-1)*ans);
                }
                else
                {
                    printf("sub of the entered number : %.2f",ans);
                }
                break;

    case 'c': printf("You have chosen Multiplication");
              printf("\nEnter how many times you want to enter:");
              scanf("%d",&n);
                for(int i=1; i<=n;i++)
                {
                 printf("Enter number:");
                 scanf("%f",&a);
                 p*=a;
                }
                printf("Multiplication of entered number: %.2f",p);
                break;

    case 'd': printf("\nYou have chosen Division");
              printf("\nEnter the number 1:");
              scanf("%f",&o);
              printf("Enter the number 2:");
              scanf("%f",&l);
              N=o/l;
              printf("Answer after division:%f",N);
              break;

    case 'e': printf("\nYou have chosen Percentage");
              printf("\nEnter the number 1:");
              scanf("%f",&o);
              printf("Enter the number for dividing number 1:");
              scanf("%f",&l);
              N=(o/l)*100;
              printf("Percentage:%f",N);
              break;
        
    }
    
}