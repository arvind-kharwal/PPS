#include<stdio.h>
int main()
{
    struct Book
    {
        int pages;
        float price;
        char name[50];
    }B;
    printf("Enter the data for B: ");
    scanf("%d%f",&B.pages,&B.price);
    printf("\nEnter the name of book: ");
    gets(B.name);
    printf("\nThe data for B: ");
    printf("Pages=%d\nPrice=%f\nName= %s",B.pages,B.price,B.name);
    return(0);
}