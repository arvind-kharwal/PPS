// structure declared outside main or globally
#include<stdio.h>
struct Book
{
    int pages;
    float price;
    char name;
};
int main()
{
    struct Book B = {100,230.50,'A'};
    printf("The elements of Book B\n");
    printf("Pages=%d\nPrice=%f\nName= %c",B.pages,B.price,B.name);
    return(0);
}