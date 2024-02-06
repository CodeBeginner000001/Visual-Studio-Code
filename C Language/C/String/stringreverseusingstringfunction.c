#include<stdio.h>
#include<string.h>
# define M_S 100
int main()
{
  char str[M_S],reverse[M_S];
  int flag;
  printf("Enter string to reverse the string:");
  gets(str);

  strcpy(reverse,str);
  strrev(reverse);

  flag=strcmp(str,reverse);
  if(flag==0)
  {
      printf("String is a palindrome");
  }
  else
  {
      printf("String is not a palidrome");
  }
}