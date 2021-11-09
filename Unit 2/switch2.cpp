#include<stdio.h>
int main()
{
    char n;
    printf("Enter the character: ");
    scanf("%c",&n); // 1
    switch(n)
    {
        case 'A':
            printf("\nI am in case A");
            break;
        case 'B':
            printf("\nI am in case B");
            break;
        case 'Z':
            printf("\nI am in case Z");
            break;
        default:
            printf("\nI am in default");
    }
    return(0);
}