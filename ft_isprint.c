#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    return ( c >= 32 && c <= 126 );
} 
