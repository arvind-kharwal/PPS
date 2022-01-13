#include<stdio.h>
int main()
{
    FILE *fs,*ft;
    char ch;
    fs = fopen("data.txt","r");
    if(fs==NULL)
        printf("File does not exist ");
    ft = fopen("test.txt","w");
    if(ft==NULL)
        printf("File does not exist ");
    while(1)
    {
        ch = fgetc(fs);
        if(ch==EOF)
            break;
        else
            fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);
    return(0);
}