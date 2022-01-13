#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int noc=0,nos=0,nol=0,nott=0;
    fp = fopen("fgets.cpp","r");
    if(fp==NULL)
        printf("\nFile is not opened!");
    while(1)
    {
        ch = fgetc(fp);
        if(ch==EOF)
            break;
        noc++;
        if(ch==' ')
            nos++;
        if(ch=='\n')
            nol++;
        if(ch=='\t')
            nott++;  
    }
    printf("\nThe characters are: %d",noc);
    printf("\nThe number of spaces: %d",nos);
    printf("\nThe number of lines: %d",nol);
    printf("\nThe number of tabs: %d",nott);
    fclose(fp); 
    return(0);
}