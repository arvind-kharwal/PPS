#include<stdio.h>
int main()
{
    struct Book
    {
        int pages,price;
        char name;
    }B={100,230,'A'};
    printf("The elements of Book B\n");
    printf("Pages=%d\nPrice=%d\nName= %c",B.pages,B.price,B.name);
    return(0);
}