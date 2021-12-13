// Pass by reference or pass by address
#include<stdio.h>
int sum(int *,int *);
int main()
{
    int r,a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b); // a= 10 = 100 | b= 20 = 200
    r = sum(&a,&b);
    //   r = sum(100,200);
    printf("\nThe sum of two numbers: %d",r);
    return(0);
}
int sum(int *p1,int *p2)
{
    int s;
    s = *p1 + *p2;
    return(s);

}