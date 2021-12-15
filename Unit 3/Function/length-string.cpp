#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int len;
    printf("Enter the string is :");
    gets(s);
    printf("\nThe string is :");
    puts(s);
    len=strlen(s);
    printf("\nThe length of string: %d",len);
    return(0);
}