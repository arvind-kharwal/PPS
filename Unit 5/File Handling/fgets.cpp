// fgets()
#include<stdio.h>
int main()
{
    FILE *fp;
    char s[30];
    fp = fopen("data.txt","r");
    if(fp==NULL)
        printf("\nFile is not opened!");
    fgets(s,20,fp);
    printf("\nThe string is %s",s);
    fclose(fp);
    return(0);
}