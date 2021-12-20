#include<stdio.h>
int main()
{
    char s;
    printf("Enter the character: ");
    // scanf("%c",&s);
    s = getchar();
    printf("The character is: %c",s);
    putchar(s);
    return(0);
}