#include<stdio.h>
int main()
{
    char s[50]="Hello World, I am engineering student";
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }
    return(0);
}