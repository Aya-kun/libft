#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void *ft_calloc(size_t nelem, size_t elsize)
{
    size_t i;
	char    *ptr;
    
    i = 0;
	ptr = malloc(nelem * elsize);
	if (!ptr)
		return (NULL);
	
	while (i < nelem * elsize)
	{
	    ptr[i] = 0;
		i++;
	}
	return (ptr);
} 
