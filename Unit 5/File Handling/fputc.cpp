#include<stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("sample.txt","w");
    if(fp==NULL)
        printf("\nFile is not opened!");
    fputc('A',fp);
    fclose(fp);
    return(0);
}