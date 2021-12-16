#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i = 0,len;
    printf("Enter the string: ");
    gets(s); // hello 
    printf("\nThe String is: ");
    puts(s);
    len = strlen(s)-1;
    while(i<len)
    {
        char t;
        t = s[i];
        s[i] = s[len];
        s[len] = t;
        i++;
        len--;
    }
    printf("\nThe Reverse String : ");
    puts(s);
}