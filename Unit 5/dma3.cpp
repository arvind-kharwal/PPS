#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int r;
    char name[20];
    float h;
};
int main()
{
    struct Student *s;
    s =(struct Student *)malloc(sizeof(struct Student));
    if(s==NULL)
        printf("No Memory Available");
    printf("\nEnter the data: ");
    scanf("%d%s%f",&s->r,&s->name,&s->h);
    printf("\nEntered data: ");
    printf("RollNo: %d\nName:%s\nHeight:%f",s->r,s->name,s->h);
    return(0);
}