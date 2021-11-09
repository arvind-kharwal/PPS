#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n); // 1
    switch(n)
    {
        case 2:
            printf("\nI am in case 1");
            break;
        case 1:
            printf("\nI am in case 2");
            break;
        case 3:
            printf("\nI am in case 3");
            break;
        default:
            printf("\nI am in default");
    }
    return(0);
}