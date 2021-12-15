#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i=0;
    printf("Enter the string is :");
    gets(s); // h e l l o '\0'
    printf("\nThe string is :");
    puts(s);
    while(s[i]!='\0')
    {
        i++;// 5
    }
    printf("\nThe length of string: %d",i);
    return(0);
}