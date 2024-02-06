#include<stdio.h>
int main()
{
    char x;
    printf("Enter the alphabet to know if it is an alphabet or consonant:");
    scanf("%c",&x);
    switch (x)
    {
       case 'a': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'e': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'i': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'o': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'u': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'A': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'E': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'I': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'O': printf("Enter alphabet is a vowel: %c",x);
                 break;
       case 'U': printf("Enter alphabet is a vowel: %c",x);
                 break;
       default: printf("Enter alphabet is a consonant: %c",x);
                 break;
    }
}