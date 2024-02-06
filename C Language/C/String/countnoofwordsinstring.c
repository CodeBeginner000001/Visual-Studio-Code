#include<stdio.h>
# define M_S 100

int main()
{
    char str[M_S];
    printf("Enter string:");
    gets(str);

    int i=0;
    int words=1;
    while(str[i]!='\0')
    {
        if( str[i]==' ' ||  str[i]=='\n' ||   str[i]=='\t')
        {
            words++;
        }
        i++;
    }
    printf("Total no of words:%d",words);
}