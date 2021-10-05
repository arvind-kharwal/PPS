// extern - external storage class

#include<stdio.h>
int a=10;
//printf("%d",a);
int main()
{
    extern int a;
    printf("%d",a);
    return(0);
}
