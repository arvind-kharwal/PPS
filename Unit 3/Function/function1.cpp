/* 
**********
Hello
**********
SRM
**********
*/
void drawline(); // function declaration
#include<stdio.h>
int main()
{
    drawline();     // function calling
    printf("\nHello\n");
    drawline();     // function calling
    printf("\nSRM\n");
    drawline();     // function calling
    return(0);
}
void drawline()
{
    int i;
    for(i=0;i<10;i++)
        printf("=");
}
