// Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
// c = (f-32)*5/9; right
// c = 5/9*(f-32) wrong

#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temp in fahrenheit:");
    scanf("%f",&f);
    c = (f-32)*5/9;
    printf("\n The temp in centigrade:%f",c);
    return(0);
}