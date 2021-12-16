#include<stdio.h>

int main()
{
    char s[50];
    int i=0;
    printf("Enter the string in lowercase: ");
    gets(s); // hello
    printf("\nThe String S1 in lowercase: ");
    puts(s);
    while(s[i]!='\0')
    {
        if((s[i]>=97)&&(s[i]<=122))
        {
            s[i] = s[i]-32;
            i++;
        }
    }
    printf("\nThe String in Uppercase: ");
    puts(s);
}