#include<stdio.h>
#include<string.h>
int  chnum( char  *p )
{
    int  num = 0, k, len, j ;
    len = strlen( p ) ;
    for( ;(*p)!='\0'; p++ )  //1
    {
        k =(*p-'0'); //2
        j = ( --len ) ;
        while( j-- > 0 ) //3
        {
            k = k * 10 ;
        }
        num = num + k ;
    }
    return  ( num );
}
int  main( )
{
    char  s[6];
    int n ;
    gets( s ) ;
    if( *s == '-' )  
    	n = -chnum( s + 1 ) ;
    else        
    	n = chnum( s ) ;
    
    printf( "%d\n", n ) ;
    
    return 0 ;
}
