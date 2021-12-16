#include<stdio.h>
int main()
{
    char s[50];
    int i=0;
    printf("Enter the string in Uppercase: ");
    gets(s); // hello
    printf("\nThe String S1 in Uppercase: ");
    puts(s);
    while(s[i]!='\0')
    {
        if((s[i]>=65)&&(s[i]<=90))
        {
            s[i] = s[i]+32;
            i++;
        }
    }
    printf("\nThe String in Lowercase: ");
    puts(s);
}