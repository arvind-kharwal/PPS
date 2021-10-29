#include<stdio.h>
int main()
{
    int a;
    a = 2||3&&4&&0||!0;
    printf("%d",a);
    return(0);
}