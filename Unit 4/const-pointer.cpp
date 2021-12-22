#include<stdio.h>
int main()
{
    //int const *p; first approach
    const int *p; // second approach
    int n = 10;
    p = &n;
    printf("The pointer p is: %d",*p);
    // *p = 100;
    // printf("The pointer p after changes: %d",*p);
    return(0);
}