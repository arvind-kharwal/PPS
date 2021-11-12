#include<stdio.h>
int main()
{
    long int a = 10;
    int b;
   // b = (int)a;      
    b = int (a); 
    printf("%d",b);
    return(0);
}