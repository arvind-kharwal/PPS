#include<stdio.h>
float sum(float,int);
int main()
{                   // stack1
    float a,r;
    int b;
    printf("Enter the two numbers: ");
    scanf("%f%d",&a,&b); // 10.5 20 
    r = sum(a,b);       // call by value or pass by value// a, b are actual argumens
    printf("\nThe sum of two numbers: %f",r);
    return(0);
}
float sum(float a,int b)    // x & y are formal arguments
{       // stack2
    float s;
    s = a+b;
    return(s);
}