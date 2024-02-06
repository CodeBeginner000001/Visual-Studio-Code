#include<stdio.h>
# define m_s 100

int main()
{
    char str[m_s];
    int alpha,digit,special,i;
    alpha=digit=special=i=0;
    printf("Enter the string:");
    gets(str);
    while(str[i]!='\0')
    {
      if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
      {
          alpha++;
      }
      else if(str[i]>='0'&&str[i]<='9')
      {
          digit++;
      }
      else 
      {
          special++;
      }
      i++;
    }
    printf("\nTotal no of alphabet in the entered string is:%d",alpha);
    printf("\nTotal no of digit in the entered string is:%d",digit);    
    printf("\nTotal no of special charater in the entered string is:%d",special);        
}