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
    scanf("%d%f%s",&B.pages,&B.price,B.name);
    printf("\nThe data for B: ");
    printf("Pages=%d\nPrice=%f\nName= %s",B.pages,B.price,B.name);
    return(0);
}