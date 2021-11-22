// Nested for loop

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d %d",i,j);
        }
    }
    return(0);
}