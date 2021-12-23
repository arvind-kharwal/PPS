#include<stdio.h>
int main()
{
    struct Book
    {
        int pages;
        float price;
        char name[50];
    }B1,B2,B3;
    printf("Enter the data for B1: ");
    scanf("%d%f%s",&B1.pages,&B1.price,B1.name);
    printf("\nThe data for B1: ");
    printf("Pages=%d\nPrice=%f\nName= %s",B1.pages,B1.price,B1.name);
    printf("\nEnter the data for B2: ");
    scanf("%d%f%s",&B2.pages,&B2.price,B2.name);
    printf("\nThe data for B2: ");
    printf("Pages=%d\nPrice=%f\nName= %s",B2.pages,B2.price,B2.name);
    printf("\nEnter the data for B3: ");
    scanf("%d%f%s",&B3.pages,&B3.price,B3.name);
    printf("\nThe data for B3: ");
    printf("Pages=%d\nPrice=%f\nName= %s",B3.pages,B3.price,B3.name);
    return(0);
}