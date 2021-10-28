/* else if ladder example */

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    if(n==1)
        printf("Hello");
    else if(n==2)
         printf("ECE");
    else if(n==3)
         printf("EEE");
    else if(n==4)
         printf("C Programming");
    else
         printf("SRM");
         
    return(0);
}