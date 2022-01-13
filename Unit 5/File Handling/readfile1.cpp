#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("data.txt","r");
    ch = fgetc(fp);
    printf("\nThe character is: %c",ch);
    fclose(fp);
    return(0);
}