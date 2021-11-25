#include<stdio.h>
int main( )
{
    int x = 4, y = 0, z ;
    while ( x >= 0 )    // 3
    {
        x-- ;  // 2
        y++ ;  // 2

        if ( x == y )
            break ;
        else
            printf("\n%d %d\n", x, y ) ;  // 4 0 -> 3 1 -> 
        
    }
    return(0);
}