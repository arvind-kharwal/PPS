#include<stdio.h>
int main()
{
    void *p;
    int n=10;
    p = &n;
    printf("The value: %d",*(int*)p);
    return(0);
}
//double p = 23.4
// int a;
// a = (int) p;