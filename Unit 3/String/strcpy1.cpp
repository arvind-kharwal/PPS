// copy without library fucntion
#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int i=0;
    printf("Enter the first string: ");
    gets(s1); // hello
    printf("\nThe String S1: ");
    puts(s1);
    while(s1[i]!='\0')
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i]='\0';
    printf("\nThe String S2: ");
    puts(s2);
    return(0);
}