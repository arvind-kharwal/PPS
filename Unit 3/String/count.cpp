// Write a C program to calculate the number of vowels
// and consonants in a given string.
#include<stdio.h>
int main()
{
    char s[50];
    int i=0,v=0,c=0;
    printf("Enter the string: ");
    gets(s);
    printf("\nThe string is: ");
    puts(s);
    while(s[i]!='\0')
    {
        if((s[i]>=65)&&(s[i]<=90)||(s[i]>=97)&&(s[i]<=122))
        {
            if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
                v++;
            else
                c++;
        }
    i++;
    }
    printf("\nThe number of vowels: %d",v);
    printf("\nThe number of consonants: %d",c);
}