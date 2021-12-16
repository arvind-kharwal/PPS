#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter the string in lowercase: ");
    gets(s); // hello
    printf("\nThe String S1 in lowercase: ");
    puts(s);
    strupr(s); // 
    printf("\nThe String in Uppercase: ");
    puts(s);
}