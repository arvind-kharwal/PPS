#include<stdio.h>
int main()
{
    struct Book
    {
        int pages;
        float price;
        char name;
    };
    struct Book B1={100,230.50,'A'};
    struct Book B2={120,300.25,'B'};
    printf("The elements of Book B1\n");
    printf("Pages=%d\nPrice=%f\nName= %c",B1.pages,B1.price,B1.name);
    printf("\nThe elements of Book B2\n");
    printf("Pages=%d\nPrice=%f\nName= %c",B2.pages,B2.price,B2.name);
    return(0);
}