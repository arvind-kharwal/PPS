#include<stdio.h>
void sum(float,float,float); // declaration
int main()
{
    float a,b,c;
    printf("Enter three numbers: ");
    scanf("%f%f%f",&a,&b,&c); // 10.5, 20.5, 30.0
    sum(a,b,c); // function calling
    return(0);
}
void sum(float x,float y,float z) // function definition
{
    float s;
    s = x+y+z;
    printf("\nThe sum of three numbers is: %f",s);
}
