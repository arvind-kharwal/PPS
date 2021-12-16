#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter the string: ");
    gets(s); // hello -> olleh
    printf("\nThe String is: ");
    puts(s);
    strrev(s); 
    printf("\nThe Reverse String : ");
    puts(s);
}