/* Two numbers are entered through the keyboard. 
Write a C program to find the value of one number
raised to the power of another. 
2**5 = 32
*/
#include<stdio.h>
int main()
{
    int x,y,power=1,i;
    printf("Enter the two numbers: ");
    scanf("%d%d",&x,&y); // x =2 y =3
    for(i=1;i<=y;i++)
    {
        power = power*x; // 8
    }
    printf("The value is: %d",power);
    return(0);
}