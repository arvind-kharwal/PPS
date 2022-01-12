#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s;
    s = (char *)malloc(15);
    strcpy(s,"Programming");
    printf("\nThe string is: %s",s);
    printf("\nThe address of string : %u",s);
    s = (char *)realloc(s,20);
    strcat(s,"Python");
    printf("\nThe string is: %s",s);
    printf("\nThe address of string : %u",s);
    return(0);
}