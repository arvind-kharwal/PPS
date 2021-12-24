// Pointer to structure
#include<stdio.h>
int main()
{
    struct Book
    {
        int pages;
        float price;
        char name;
    };
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(char));
    struct Book B={100,230.35,'A'};
    printf("The size of structure variable B: %d\n",sizeof(B));
    struct Book *p;
    p = &B; // ->   Arrow operator 
    printf("The elements of Book B using dot operator\n");
    printf("Pages=%d\nPrice=%f\nName= %c\n",B.pages,B.price,B.name);
    printf("\nThe elements of Book B using arrow operator\n");
    printf("Pages=%d\nPrice=%f\nName= %c",p->pages,p->price,p->name);
    return(0);
}