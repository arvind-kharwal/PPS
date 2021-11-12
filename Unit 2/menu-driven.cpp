#include<stdio.h>
#include<stdlib.h>

int main()
{
    while(1)    // infinite loop 
    {   
        int a,b,res,ch;
        printf("\n\n\t\t\tCalculator");
        printf("\n 1. Addition");
        printf("\n 2. Subtraction");
        printf("\n 3. Multiplication");
        printf("\n 4. Division");
        printf("\n 5. Press 5 to exit");
        printf("\n\n Enter your choice: ");
        scanf("%d",&ch);
        if(ch==5)
        break;
        switch(ch)
        {
            case 1:
                system("cls");
                printf("\n\t\t\tAddition");
                printf("\n\n Enter two numbers: ");
                scanf("%d%d",&a,&b);
                res = a+b;
                printf("The sum is %d",res);
                break;
            case 2:
                system("cls");
                printf("\n\t\t\tSubtraction");
                printf("\n\n Enter two numbers: ");
                scanf("%d%d",&a,&b);
                res = a-b;
                printf("The subtraction is %d",res);
                break;
            case 3:
                system("cls");
                printf("\n\t\t\tMultiplication");
                printf("\n\n Enter two numbers: ");
                scanf("%d%d",&a,&b);
                res = a*b;
                printf("The multiplication is %d",res);
                break;
            case 4:
                system("cls");
                printf("\n\t\t\tDivison");
                printf("\n\n Enter two numbers: ");
                scanf("%d%d",&a,&b);
                res = a/b;
                printf("The Divison is %d",res);
                break;
            default:
                printf("You have entered wrong choice!!");
        }
    }
    printf("Control is out from the infinite loop");
    return(0);
}