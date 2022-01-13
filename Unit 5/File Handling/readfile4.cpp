#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.txt","r");
    if(fp==NULL)
        printf("\nFile is not opened!");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF) // end of file.
            break;
        else
            printf("%c",ch);
    }
    fclose(fp);
    return(0);
}