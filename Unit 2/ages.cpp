/* If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three.
*/
#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter the ages of Ram, Shyam & Ajay:");
    scanf("%d%d%d",&r,&s,&a); // 10 10 10 
    if(r<s)
    {
        if(r<a)
            printf("\nRam is youngest");
        else
            printf("\nAjay is youngest");
    }
    else
    {
        if(s<a)
            printf("\nShyam is youngest");
        else
            printf("\nAjay is youngest");
    }
    return(0);
}