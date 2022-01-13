#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("data.txt","r");
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