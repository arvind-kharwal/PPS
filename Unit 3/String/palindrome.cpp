/* Write a C program to check the whether 
the string is palindrome or not.
NITIN 
MADAM
ARORA
MOM
JALAJ
MALAYALAM 
RADAR
LEVEL
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i=0,t=0,len;
    printf("Enter the string: ");
    gets(s); // MADAN
    printf("\nThe string is: ");
    puts(s);
    len = strlen(s)-1; 
    while(s[i]!='\0')
    {
        if(s[i]!=s[len])
            t++;
        i++;
        len--;
    }
    if(t>0)
        printf("The %s is not a palindrome string",s);
    else
        printf("The %s is a palindrome string",s);
}