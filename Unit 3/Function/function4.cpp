#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b); // 10 20 
    sum(a,b);
    return(0);
}
void sum(int x,int y)
{
    int s;
    s = x+y;
    printf("The sum of two numbers: %d",s);
}