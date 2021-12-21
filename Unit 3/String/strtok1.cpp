// s1= This is a computer
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50] = " ";
    char *p;
    printf("Enter the string s1: ");
    gets(s1);
    printf("\nThe string s1: ");
    p = strtok(s1,s2);
    while(p!=NULL)
    {
        printf("%s\n",p);
        p = strtok(NULL,s2);
    }
    return(0);
}