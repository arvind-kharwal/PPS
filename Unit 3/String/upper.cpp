#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter the string in Uppercase: ");
    gets(s); // HELLO
    printf("\nThe String S1 in Uppercase: ");
    puts(s);
    strlwr(s); // 
    printf("\nThe String in lowercase: ");
    puts(s);
}