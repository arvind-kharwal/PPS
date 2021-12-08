#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,r;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b); // 10 20 
    r=sum(a,b);
    printf("The sum of two numbers: %d",r);
    return(0);
}
int sum(int x,int y)
{
    int s;
    s = x+y;
    return(s);
    
}