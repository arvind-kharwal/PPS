#include<stdio.h>
int main()
{
    FILE *fp;
    int i=0;
    char s[50];
    fp = fopen("sample.txt","w");
    if(fp==NULL)
        printf("\nFile is not opened!");
    printf("\nEnter the string: ");
    gets(s);
    while(s[i]!='\0')
    {
        fputc(s[i],fp);
        i++;
    }
    fclose(fp);
    return(0);
}