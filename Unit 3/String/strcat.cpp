/* s1 = "hello";
s2 = "World";
s1+S2 = "helloworld";
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[50];
    printf("Enter the string S1: ");
    gets(s1); // hello 
    printf("\nThe String S1 is: ");
    puts(s1);
    printf("Enter the string S2: ");
    gets(s2); // world
    printf("\nThe String S2 is: ");
    puts(s2);
    strcat(s1,s2);
    printf("\nThe concatenated String S1: ");
    puts(s1);
}