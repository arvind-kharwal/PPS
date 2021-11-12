// we cant use float values in switch
#include<stdio.h>
int main()
{
    float n;
    printf("Enter the number: ");
    scanf("%f",&n); // 1
    switch(n)
    {
        case 3.5:
            printf("\nI am in case A");
            break;
        case 100:
            printf("\nI am in case B");
            break;
        case 'a':
            printf("\nI am in case small a");
            break;
        case 7:
            printf("\nI am in case Z");
            break;
        default:
            printf("\nI am in default");
    }
    return(0);
}