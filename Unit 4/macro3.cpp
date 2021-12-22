#include<stdio.h>
#define srm printf("Hello")
#define ind printf("Guys!")
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n); // 52
    if(n<10)
        srm;
    else
        ind;
    return(0);
}